cmake_minimum_required(VERSION 3.12.3)

# Set the project name and version
project(AI_STEM_Tutor VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)

# Include directories (if needed)
include_directories(include)

# Add the executable
add_executable(tutor_app src/main.cpp src/tutor.cpp src/ai_connector.cpp)

# Link Python library (adjust the version if needed)
find_package(Python3 REQUIRED)
