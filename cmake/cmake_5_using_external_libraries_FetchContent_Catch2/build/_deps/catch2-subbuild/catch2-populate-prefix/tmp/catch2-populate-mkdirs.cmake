# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-src"
  "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-build"
  "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-subbuild/catch2-populate-prefix"
  "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-subbuild/catch2-populate-prefix/tmp"
  "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
  "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-subbuild/catch2-populate-prefix/src"
  "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
)

set(configSubDirs Debug)
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/kwkm/Desktop/Personal Projects/C++/notes/cmake/cmake_5_using_external_libraries_FetchContent_Catch2/build/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
