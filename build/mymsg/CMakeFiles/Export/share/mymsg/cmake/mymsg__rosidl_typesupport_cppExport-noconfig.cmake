#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "mymsg::mymsg__rosidl_typesupport_cpp" for configuration ""
set_property(TARGET mymsg::mymsg__rosidl_typesupport_cpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(mymsg::mymsg__rosidl_typesupport_cpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libmymsg__rosidl_typesupport_cpp.so"
  IMPORTED_SONAME_NOCONFIG "libmymsg__rosidl_typesupport_cpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS mymsg::mymsg__rosidl_typesupport_cpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_mymsg::mymsg__rosidl_typesupport_cpp "${_IMPORT_PREFIX}/lib/libmymsg__rosidl_typesupport_cpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
