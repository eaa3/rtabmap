#include "rtabmap/core/OcTreeDynamicMap.h"


namespace octomap {

unsigned int OcTreeDynamic::getLastUpdateTime() {
    // this value is updated whenever inner nodes are
    // updated using updateOccupancyChildren()
    return root->getTimestamp();
  }

  void OcTreeDynamic::degradeOutdatedNodes(unsigned int time_thres) {
    unsigned int query_time = (unsigned int) time(NULL);

    for(leaf_iterator it = this->begin_leafs(), end=this->end_leafs();
        it!= end; ++it) {
      if ( this->isNodeOccupied(*it)
           && ((query_time - it->getTimestamp()) > time_thres) ) {
        integrateMissNoTime(&*it);
      }
    }
  }

  void OcTreeDynamic::updateNodeLogOdds(OcTreeNodeDynamic* node, const float& update) const {
    OccupancyOcTreeBase<OcTreeNodeDynamic>::updateNodeLogOdds(node, update);
    node->updateVariance();
    node->updateMean();
    node->updateTimestamp();
  }

  void OcTreeDynamic::integrateMissNoTime(OcTreeNodeDynamic* node) const{
    OccupancyOcTreeBase<OcTreeNodeDynamic>::updateNodeLogOdds(node, prob_miss_log);
  }

  OcTreeDynamic::StaticMemberInitializer OcTreeDynamic::ocTreeDynamicMemberInit;

};
