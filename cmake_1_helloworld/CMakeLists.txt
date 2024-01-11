# Steps to compile a CMake project

# 0) Create Source files and CMake file (CMakeLists.txt)
# 1) Create a `build` directory
# 2) Inside the `build` directory, run `cmake ..`
	# Generates Build Files
# 3) Again inside the `build` directory, run `cmake --build .`
	# Compiles main.cpp to an object file, which is then linked to a executable that is created
# 4) Run the executable file created in the `build` directory

#######################################################################################################

# Cheatsheet

# https://github.com/franneck94/UdemyCmake/blob/master/2_CMake/README.md

#######################################################################################################

# Default cmake version
cmake_minimum_required(VERSION 3.26.3)

# Name of project
# `CXX` means C++ because `++` would be seen as an oprator
project(
	CppProjectTemplate
	VERSION 1.0.0
	LANGUAGES C CXX
)

# Create executable
add_executable(myHelloWorldApp main.cpp)