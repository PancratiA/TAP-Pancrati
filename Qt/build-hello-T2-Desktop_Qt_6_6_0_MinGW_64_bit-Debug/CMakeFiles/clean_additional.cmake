# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\hello-T2_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\hello-T2_autogen.dir\\ParseCache.txt"
  "hello-T2_autogen"
  )
endif()
