# If we just want to compile a specific target, without having to compile all...

# 0) `cmake --build . --target [TARGET]`
	# E.g. `cmake --build . --target Library`

#######################################################################################################

# Default cmake version
cmake_minimum_required(VERSION 3.26.3)

# Name of project
project(
	CppProjectTemplate
	VERSION 1.0.0
	LANGUAGES C CXX
)

# Add a target - Create library for file/s
add_library(Library STATIC my_lib.cpp)

# Add a target - Create executable
add_executable(myHelloWorldApp main.cpp)

# Link library with executable
# 'myHelloWorldApp' executable now depends on 'Library'
# If we compile 'myHelloWorldApp', then 'Library' will also be compiled
target_link_libraries(myHelloWorldApp PUBLIC Library)
