# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Splitter01_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Splitter01_autogen.dir\\ParseCache.txt"
  "Splitter01_autogen"
  )
endif()
