# - Config file for the RTABMap package
# It defines the following variables
#  RTABMap_INCLUDE_DIRS - include directories for RTABMap
#  RTABMap_LIBRARIES    - libraries to link against

# Compute paths
get_filename_component(RTABMap_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
set(RTABMap_INCLUDE_DIRS "/home/ermano/Projects/rtabmap/corelib/include;/home/ermano/Projects/rtabmap/guilib/include;/home/ermano/Projects/rtabmap/utilite/include")

find_library(RTABMAP_CORE NAMES rtabmap_core rtabmap_cored NO_DEFAULT_PATH HINTS "/home/ermano/Projects/rtabmap/lib")
find_library(RTABMAP_GUI NAMES rtabmap_gui rtabmap_guid NO_DEFAULT_PATH HINTS "/home/ermano/Projects/rtabmap/lib")
find_library(RTABMAP_UTILITE NAMES rtabmap_utilite rtabmap_utilited NO_DEFAULT_PATH HINTS "/home/ermano/Projects/rtabmap/lib")
set(RTABMap_LIBRARIES ${RTABMAP_CORE} ${RTABMAP_GUI} ${RTABMAP_UTILITE})
