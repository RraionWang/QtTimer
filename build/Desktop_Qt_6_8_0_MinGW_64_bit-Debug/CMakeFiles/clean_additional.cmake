# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\tiemr_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\tiemr_autogen.dir\\ParseCache.txt"
  "tiemr_autogen"
  )
endif()
