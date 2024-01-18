# set(CMAKE_TOOLCHAIN_FILE "cmake/cmake_5_using_external_libraries_VCPKG/external/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "")
# set(Catch2_DIR "cmake/cmake_5_using_external_libraries_VCPKG/vcpkg_installed/x64-windows/share/Catch2")

find_package(Catch2 3 REQUIRED)
add_executable(${TEST_EXECUTABLE_NAME} test.cpp)
target_include_directories(${TEST_EXECUTABLE_NAME} PUBLIC ./)
target_link_libraries(${TEST_EXECUTABLE_NAME} PRIVATE Catch2::Catch2WithMain)