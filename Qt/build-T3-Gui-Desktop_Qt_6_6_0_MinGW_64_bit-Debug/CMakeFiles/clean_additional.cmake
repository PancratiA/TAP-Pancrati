# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\T3-Gui_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\T3-Gui_autogen.dir\\ParseCache.txt"
  "T3-Gui_autogen"
  )
endif()
