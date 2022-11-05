# CMakeLists.txt --- CMake project settings
#    ex) cmake -G "Visual Studio 9 2008" .
#    ex) cmake -DCMAKE_BUILD_TYPE=Release -G "MSYS Makefiles" .
##############################################################################

# CMake minimum version
cmake_minimum_required(VERSION 3.0)

# project name and languages
project(ScrollTest CXX RC)

##############################################################################

# ScrollTest.exe
add_executable(ScrollTest WIN32 ScrollTest.cpp ScrollTest_res.rc)
target_link_libraries(ScrollTest comctl32)

##############################################################################
