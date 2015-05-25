#ifndef OCTREE_DYNAMIC_H_
#define OCTREE_DYNAMIC_H_

#include <octomap/octomap.h>
#include <octomap/OcTree.h>
#include <octomap/Pointcloud.h>
#include <octomap/math/Utils.h>


namespace octomap {
/********************************* Custom Octomap **************************************/

// node definition
class OcTreeNodeDynamic : public OcTreeNode {

public:
	OcTreeNodeDynamic() : OcTreeNode(), mean(0), var(0), timestamp(0) {}

	OcTreeNodeDynamic(const OcTreeNodeDynamic& rhs) : OcTreeNode(rhs), timestamp(rhs.timestamp) {}

	bool operator==(const OcTreeNodeDynamic& rhs) const{
		return (rhs.value == value && rhs.timestamp == timestamp);
	}

	// children
	inline OcTreeNodeDynamic* getChild(unsigned int i) {
		return static_cast<OcTreeNodeDynamic*> (OcTreeNode::getChild(i));
	}
	inline const OcTreeNodeDynamic* getChild(unsigned int i) const {
		return static_cast<const OcTreeNodeDynamic*> (OcTreeNode::getChild(i));
	}

	bool createChild(unsigned int i) {
		if (children == NULL) allocChildren();
		children[i] = new OcTreeNodeDynamic();
		return true;
	}

	// timestamp
	inline unsigned int getTimestamp() const { return timestamp; }

	float getMean(){
		return mean;
	}

	float getVariance(){
		if( timestamp >= 2 ){
			return var/(timestamp-1);
		}
		else return 0.0;
	}

	void updateParameters() {
		timestamp++;
		float oldMean = mean;
		mean += (getOccupancy() - mean)/timestamp;
		var += (getOccupancy()- oldMean)*(getOccupancy() - mean);

	}

	// update occupancy and timesteps of inner nodes
	inline void updateOccupancyChildren() {
		this->setLogOdds(this->getMaxChildLogOdds());  // conservative
		updateParameters();
	}

protected:
	float mean;
	float var;
	unsigned int timestamp;
};


// tree definition
class OcTreeDynamic : public OccupancyOcTreeBase <OcTreeNodeDynamic> {

public:
	/// Default constructor, sets resolution of leafs
	OcTreeDynamic(double resolution) : OccupancyOcTreeBase<OcTreeNodeDynamic>(resolution) {};

	/// virtual constructor: creates a new object of same type
	/// (Covariant return type requires an up-to-date compiler)
	OcTreeDynamic* create() const {return new OcTreeDynamic(resolution); }

	std::string getTreeType() const {return "OcTreeDynamic";}

	//! \return timestamp of last update
	//unsigned int getLastUpdateTime();

	//void degradeOutdatedNodes(unsigned int time_thres);

	virtual void updateNodeLogOdds(OcTreeNodeDynamic* node, const float& update) const;
	void integrateMissNoTime(OcTreeNodeDynamic* node) const;

protected:
	/**
	 * Static member object which ensures that this OcTree's prototype
	 * ends up in the classIDMapping only once
	 */
	class StaticMemberInitializer{
	public:
		StaticMemberInitializer() {
			OcTreeDynamic* tree = new OcTreeDynamic(0.1);
			AbstractOcTree::registerTreeType(tree);
		}
	};
	/// to ensure static initialization (only once)
	static StaticMemberInitializer ocTreeDynamicMemberInit;

};

};


#endif //OCTREE_DYNAMIC_H_
