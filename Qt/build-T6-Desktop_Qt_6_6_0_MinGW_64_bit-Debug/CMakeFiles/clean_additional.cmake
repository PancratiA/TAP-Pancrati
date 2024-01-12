# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\T6_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\T6_autogen.dir\\ParseCache.txt"
  "T6_autogen"
  )
endif()
