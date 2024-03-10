cmake_minimum_required(VERSION 3.12)
project(raytracer)

set(CMAKE_CXX_STANDARD 11)

# Add your source files here
set(SOURCES
    main.cpp  
)

# Add any additional include directories here
include_directories(
    # Add include directories here
)

# Add any additional libraries here
link_directories(
    # Add library directories here
)

add_executable(raytracer ${SOURCES})


add_custom_target(run_main
    COMMAND main > image.ppm
    DEPENDS main
    WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
)

# Add any additional libraries to link against here
target_link_libraries(raytracer
    # Add libraries to link against here
)