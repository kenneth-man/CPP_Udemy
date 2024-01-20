# Add a target - Create library for file
add_library(${LIBRARY_NAME} STATIC my_lib.cpp)

# Convention is [PROJECT_NAME]::[LIBRARY_NAME], found in CMakeLists.txt file of the repository
target_link_libraries(${LIBRARY_NAME} PUBLIC nlohmann_json::nlohmann_json)