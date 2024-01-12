# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Dirs_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Dirs_autogen.dir\\ParseCache.txt"
  "Dirs_autogen"
  )
endif()
