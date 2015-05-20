# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ermano/Projects/rtabmap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ermano/Projects/rtabmap

# Include any dependencies generated for this target.
include tools/ConsoleApp/CMakeFiles/consoleApp.dir/depend.make

# Include the progress variables for this target.
include tools/ConsoleApp/CMakeFiles/consoleApp.dir/progress.make

# Include the compile flags for this target's objects.
include tools/ConsoleApp/CMakeFiles/consoleApp.dir/flags.make

tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o: tools/ConsoleApp/CMakeFiles/consoleApp.dir/flags.make
tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o: tools/ConsoleApp/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/ermano/Projects/rtabmap/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o"
	cd /home/ermano/Projects/rtabmap/tools/ConsoleApp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/consoleApp.dir/main.cpp.o -c /home/ermano/Projects/rtabmap/tools/ConsoleApp/main.cpp

tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/consoleApp.dir/main.cpp.i"
	cd /home/ermano/Projects/rtabmap/tools/ConsoleApp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/ermano/Projects/rtabmap/tools/ConsoleApp/main.cpp > CMakeFiles/consoleApp.dir/main.cpp.i

tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/consoleApp.dir/main.cpp.s"
	cd /home/ermano/Projects/rtabmap/tools/ConsoleApp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/ermano/Projects/rtabmap/tools/ConsoleApp/main.cpp -o CMakeFiles/consoleApp.dir/main.cpp.s

tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o.requires:
.PHONY : tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o.requires

tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o.provides: tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o.requires
	$(MAKE) -f tools/ConsoleApp/CMakeFiles/consoleApp.dir/build.make tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o.provides.build
.PHONY : tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o.provides

tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o.provides.build: tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o

# Object files for target consoleApp
consoleApp_OBJECTS = \
"CMakeFiles/consoleApp.dir/main.cpp.o"

# External object files for target consoleApp
consoleApp_EXTERNAL_OBJECTS =

bin/rtabmap-console: tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o
bin/rtabmap-console: /opt/ros/hydro/lib/liboctomap.so
bin/rtabmap-console: /opt/ros/hydro/lib/liboctomath.so
bin/rtabmap-console: bin/librtabmap_core.so.0.9.0
bin/rtabmap-console: bin/librtabmap_utilite.so.0.9.0
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_videostab.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_video.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_ts.a
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_superres.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_stitching.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_photo.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_ocl.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_objdetect.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_nonfree.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_ml.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_legacy.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_imgproc.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_highgui.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_gpu.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_flann.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_features2d.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_core.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_contrib.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_calib3d.so.2.4.9
bin/rtabmap-console: /usr/lib/libboost_system-mt.so
bin/rtabmap-console: /usr/lib/libboost_filesystem-mt.so
bin/rtabmap-console: /usr/lib/libboost_thread-mt.so
bin/rtabmap-console: /usr/lib/libboost_date_time-mt.so
bin/rtabmap-console: /usr/lib/libboost_iostreams-mt.so
bin/rtabmap-console: /usr/lib/libboost_serialization-mt.so
bin/rtabmap-console: /usr/lib/libpcl_common.so
bin/rtabmap-console: /usr/lib/libflann_cpp_s.a
bin/rtabmap-console: /usr/lib/libpcl_kdtree.so
bin/rtabmap-console: /usr/lib/libpcl_octree.so
bin/rtabmap-console: /usr/lib/libpcl_search.so
bin/rtabmap-console: /usr/lib/libOpenNI.so
bin/rtabmap-console: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkCharts.so.5.8.0
bin/rtabmap-console: /usr/lib/libpcl_io.so
bin/rtabmap-console: /usr/lib/libpcl_sample_consensus.so
bin/rtabmap-console: /usr/lib/libpcl_filters.so
bin/rtabmap-console: /usr/lib/libpcl_visualization.so
bin/rtabmap-console: /usr/lib/libpcl_outofcore.so
bin/rtabmap-console: /usr/lib/libpcl_features.so
bin/rtabmap-console: /usr/lib/libpcl_segmentation.so
bin/rtabmap-console: /usr/lib/libpcl_people.so
bin/rtabmap-console: /usr/lib/libpcl_registration.so
bin/rtabmap-console: /usr/lib/libpcl_recognition.so
bin/rtabmap-console: /usr/lib/libpcl_keypoints.so
bin/rtabmap-console: /usr/lib/libqhull.so
bin/rtabmap-console: /usr/lib/libpcl_surface.so
bin/rtabmap-console: /usr/lib/libpcl_tracking.so
bin/rtabmap-console: /usr/lib/libpcl_apps.so
bin/rtabmap-console: /usr/lib/libboost_system-mt.so
bin/rtabmap-console: /usr/lib/libboost_filesystem-mt.so
bin/rtabmap-console: /usr/lib/libboost_thread-mt.so
bin/rtabmap-console: /usr/lib/libboost_date_time-mt.so
bin/rtabmap-console: /usr/lib/libboost_iostreams-mt.so
bin/rtabmap-console: /usr/lib/libboost_serialization-mt.so
bin/rtabmap-console: /usr/lib/libqhull.so
bin/rtabmap-console: /usr/lib/libOpenNI.so
bin/rtabmap-console: /usr/lib/libflann_cpp_s.a
bin/rtabmap-console: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkCharts.so.5.8.0
bin/rtabmap-console: /opt/ros/hydro/lib/liboctomap.so
bin/rtabmap-console: /opt/ros/hydro/lib/liboctomath.so
bin/rtabmap-console: /usr/lib/x86_64-linux-gnu/libpthread.so
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_nonfree.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_ocl.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_gpu.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_photo.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_objdetect.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_legacy.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_video.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_ml.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_calib3d.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_features2d.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_highgui.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_imgproc.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_flann.so.2.4.9
bin/rtabmap-console: /opt/ros/hydro/lib/libopencv_core.so.2.4.9
bin/rtabmap-console: /usr/lib/libvtkViews.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkInfovis.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkWidgets.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkHybrid.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkParallel.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkVolumeRendering.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkRendering.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkGraphics.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkImaging.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkIO.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkFiltering.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtkCommon.so.5.8.0
bin/rtabmap-console: /usr/lib/libvtksys.so.5.8.0
bin/rtabmap-console: /usr/lib/libpcl_common.so
bin/rtabmap-console: /usr/lib/libpcl_kdtree.so
bin/rtabmap-console: /usr/lib/libpcl_octree.so
bin/rtabmap-console: /usr/lib/libpcl_search.so
bin/rtabmap-console: /usr/lib/libpcl_io.so
bin/rtabmap-console: /usr/lib/libpcl_sample_consensus.so
bin/rtabmap-console: /usr/lib/libpcl_filters.so
bin/rtabmap-console: /usr/lib/libpcl_visualization.so
bin/rtabmap-console: /usr/lib/libpcl_outofcore.so
bin/rtabmap-console: /usr/lib/libpcl_features.so
bin/rtabmap-console: /usr/lib/libpcl_segmentation.so
bin/rtabmap-console: /usr/lib/libpcl_people.so
bin/rtabmap-console: /usr/lib/libpcl_registration.so
bin/rtabmap-console: /usr/lib/libpcl_recognition.so
bin/rtabmap-console: /usr/lib/libpcl_keypoints.so
bin/rtabmap-console: /usr/lib/libpcl_surface.so
bin/rtabmap-console: /usr/lib/libpcl_tracking.so
bin/rtabmap-console: /usr/lib/libpcl_apps.so
bin/rtabmap-console: /usr/lib/x86_64-linux-gnu/libz.so
bin/rtabmap-console: /opt/ros/hydro/lib/libfreenect.so
bin/rtabmap-console: /opt/ros/hydro/lib/libfreenect_sync.so
bin/rtabmap-console: /usr/lib/libOpenNI2.so
bin/rtabmap-console: /usr/lib/x86_64-linux-gnu/libdc1394.so
bin/rtabmap-console: /opt/ros/hydro/lib/libg2o_stuff.so
bin/rtabmap-console: /opt/ros/hydro/lib/libg2o_core.so
bin/rtabmap-console: /opt/ros/hydro/lib/libg2o_solver_csparse.so
bin/rtabmap-console: /opt/ros/hydro/lib/libg2o_csparse_extension.so
bin/rtabmap-console: /opt/ros/hydro/lib/libg2o_types_slam2d.so
bin/rtabmap-console: /opt/ros/hydro/lib/libg2o_types_slam3d.so
bin/rtabmap-console: /usr/lib/libcxsparse.so
bin/rtabmap-console: tools/ConsoleApp/CMakeFiles/consoleApp.dir/build.make
bin/rtabmap-console: tools/ConsoleApp/CMakeFiles/consoleApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../bin/rtabmap-console"
	cd /home/ermano/Projects/rtabmap/tools/ConsoleApp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/consoleApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/ConsoleApp/CMakeFiles/consoleApp.dir/build: bin/rtabmap-console
.PHONY : tools/ConsoleApp/CMakeFiles/consoleApp.dir/build

tools/ConsoleApp/CMakeFiles/consoleApp.dir/requires: tools/ConsoleApp/CMakeFiles/consoleApp.dir/main.cpp.o.requires
.PHONY : tools/ConsoleApp/CMakeFiles/consoleApp.dir/requires

tools/ConsoleApp/CMakeFiles/consoleApp.dir/clean:
	cd /home/ermano/Projects/rtabmap/tools/ConsoleApp && $(CMAKE_COMMAND) -P CMakeFiles/consoleApp.dir/cmake_clean.cmake
.PHONY : tools/ConsoleApp/CMakeFiles/consoleApp.dir/clean

tools/ConsoleApp/CMakeFiles/consoleApp.dir/depend:
	cd /home/ermano/Projects/rtabmap && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ermano/Projects/rtabmap /home/ermano/Projects/rtabmap/tools/ConsoleApp /home/ermano/Projects/rtabmap /home/ermano/Projects/rtabmap/tools/ConsoleApp /home/ermano/Projects/rtabmap/tools/ConsoleApp/CMakeFiles/consoleApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/ConsoleApp/CMakeFiles/consoleApp.dir/depend

