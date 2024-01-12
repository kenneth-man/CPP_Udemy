# Default cmake version
cmake_minimum_required(VERSION 3.26.3)

# Name of project
project(
	KennethProject
	VERSION 1.0.0
	LANGUAGES C CXX
)

# Let CMake know about our subdirectory `CMakeLists.txt` files
# NB: ORDER IS IMPORTANT
	# `.h` files after `.cpp` files
	# E.g. `include` after `src`)
add_subdirectory(app)
add_subdirectory(src)
add_subdirectory(include)
