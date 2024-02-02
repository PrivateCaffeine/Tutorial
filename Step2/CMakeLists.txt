# Sets the minimum required version and updates the policy settings.
cmake_minimum_required(VERSION 3.20)

# Sets the name of the project
project(Tutorial VERSION 1.0)

# Require C++11 standard by setting variables
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add an executable to the project using the specified source files
add_executable(Tutorial tutorial.cxx)

# Use the new library
add_subdirectory(MathFunctions)

# Link the new library target to the executable
target_link_libraries(Tutorial PUBLIC MathFunctions)

# Copy files to another location and substitute variable values
configure_file(TutorialConfig.h.in TutorialConfig.h)

# Specify library's header file locations
target_include_directories(Tutorial PUBLIC 
	"${PROJECT_BINARY_DIR}"
	"${PROJECT_SOURCE_DIR}/MathFunctions"
	)