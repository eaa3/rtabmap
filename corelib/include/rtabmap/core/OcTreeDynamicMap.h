#ifndef OCTREE_DYNAMIC_H_
#define OCTREE_DYNAMIC_H_

#include <octomap/octomap.h>
#include <octomap/OcTree.h>
#include <octomap/Pointcloud.h>


namespace octomap {
/********************************* Custom Octomap **************************************/

// node definition
class OcTreeNodeDynamic : public OcTreeNode {

public:
	OcTreeNodeDynamic() : OcTreeNode(), variance(0), mean(0), timestamp(0) {}

	OcTreeNodeDynamic(const OcTreeNodeDynamic& rhs) : OcTreeNode(rhs), variance(rhs.variance), mean(rhs.mean), timestamp(rhs.timestamp) {}

	bool operator==(const OcTreeNodeDynamic& rhs) const{
		return (rhs.value == value && rhs.variance == variance && rhs.mean == mean && rhs.timestamp == timestamp);
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

	// variance
	inline unsigned int getVariance() const { return variance; }
	inline void updateVariance() { /*TODO*/ }
	inline void setVariance(double variance) {this->variance = variance; }

	// mean
	inline unsigned int getMean() const { return mean; }
	inline void updateMean() { /*TODO*/}
	inline void setMean(double mean) {this->mean = mean; }

	// timestamp
	inline unsigned int getTimestamp() const { return timestamp; }
	inline void updateTimestamp() { timestamp = (unsigned int) time(NULL);}
	inline void setTimestamp(unsigned int timestamp) {this->timestamp = timestamp; }

	// update occupancy and timesteps of inner nodes
	inline void updateOccupancyChildren() {
		this->setLogOdds(this->getMaxChildLogOdds());  // conservative
		updateVariance();
		updateMean();
		updateTimestamp();

	}

protected:
	double variance, mean;
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
	unsigned int getLastUpdateTime();

	void degradeOutdatedNodes(unsigned int time_thres);

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
