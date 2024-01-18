# Using VCPKG - https://vcpkg.io/en/getting-started
# 0) Git clone the repo in a directory
	# E.g.
		# `cd external`
		# `git clone https://github.com/Microsoft/vcpkg.git`
# 1) `.\vcpkg\bootstrap-vcpkg.bat`
# 2) Create a `vcpkg.json` file in root
# 3) Add json for config
	# "dependencies" are dependencies to install
	# "overrides" is to specify a fixed version for a dependency
	# "builtin-baseline" is the most recent commit of vcpkg
# 4) cd into where `vcpkg.exe` is located then install dependencies
	# E.g.
		# `cd external/vcpkg`
		# `.\vcpkg install`
# 5) Add an `include` line in root `CMakeLists.txt` file to let CMake know about VCPKG
	# E.g. `include(${CMAKE_SOURCE_DIR}/external/vcpkg/scripts/buildsystems/vcpkg.cmake)`
# 6) Installed depencies are stored in `vcpkg/packages`
	# E.g. `cd external/vcpkg/packages`
# 7) Find the dependency include name to use in your project
	# E.g. For `catch2` it is `catch2_x64-windows/include/catch.hpp`

#######################################################################################################

# Default cmake version
cmake_minimum_required(VERSION 3.26.3)

# Name of project
project(
	KennethProject
	VERSION 1.0.0
	LANGUAGES C CXX
)

# Override Pre-defined Variables
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Custom Global Variables
# All subdirectories have access to variables defined in root CMakeLists.txt
set(LIBRARY_NAME myLibrary)
set(EXECUTABLE_NAME myExecutable)
set(TEST_EXECUTABLE_NAME myUnitTests)

# Custom Options
# Set the option when running `cmake ..` in build directory
# E.g. `cmake .. -DCOMPILE_EXECUTABLE=ON`
option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

# Let CMake know about our subdirectory `CMakeLists.txt` files
# NB: ORDER IS IMPORTANT
	# `.h` files after `.cpp` files
	# E.g. `include` after `src`)
add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(tests)

# Let CMake know about our VCPKG
include(${CMAKE_SOURCE_DIR}/external/vcpkg/scripts/buildsystems/vcpkg.cmake)

if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
endif()