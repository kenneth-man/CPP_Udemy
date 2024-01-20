# `mkdir build`
# `cd build`
	# Generates build files
		# Contain instructions and configuration information for a build system to compile, link, and generate the final executable or library from source code
		# The build system uses these files to automate the process of transforming human-readable source code into machine-executable binaries
# `cmake ..` or `cmake .. -DCOMPILE_EXECUTABLE=ON`
	# Compilation and linking
		# After compiling source code files (e.g., .c, .cpp), object files (e.g., .o, .obj) are generated containing machine code corresponding to the compiled source code
		# The linker takes these object files, resolves symbols (functions or variables that were declared but not defined in the current file), and combines them to produce an executable
# `cmake --build .`



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
#set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/")

# Custom Global Variables
# All subdirectories have access to variables defined in root CMakeLists.txt
set(LIBRARY_NAME myLibrary)
set(LIBRARY_NAME_2 myLibrary2)
set(EXECUTABLE_NAME myExecutable)

# Custom Options
# Set the option when running `cmake ..` in build directory
# E.g. `cmake .. -DCOMPILE_EXECUTABLE=ON`
option(COMPILE_EXECUTABLE "Whether to compile the executable" OFF)

# Include `FetchContent` from Cmake
include(FetchContent)

# Clones the repository into `/build/_deps` directory
FetchContent_Declare(
	Catch2
	GIT_REPOSITORY https://github.com/catchorg/Catch2.git
	GIT_TAG v3.5.1
)

FetchContent_Declare(
	json
	URL
	https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz
)

# Loads the repository into our project
FetchContent_MakeAvailable(Catch2)
FetchContent_MakeAvailable(json)

# Let CMake know about our subdirectory `CMakeLists.txt` files
# NB: ORDER IS IMPORTANT
	# `.h` files after `.cpp` files
	# E.g. `include` after `src`)
add_subdirectory(src)
add_subdirectory(include)
add_subdirectory(tests)

if (COMPILE_EXECUTABLE)
    add_subdirectory(app)
endif()