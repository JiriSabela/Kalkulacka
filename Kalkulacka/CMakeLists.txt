# CMakeList.txt : CMake project for Kalkulacka, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Kalkulacka "Kalkulacka.cpp" "Kalkulacka.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Kalkulacka PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
