# Add a target - Create executable
add_executable(myExecutable main.cpp)

# Link library with executable
target_link_libraries(myExecutable PUBLIC Library)