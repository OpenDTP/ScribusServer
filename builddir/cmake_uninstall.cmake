IF(NOT EXISTS "/Users/detass_g/Etna/EIP/scribus/scribus/builddir/install_manifest.txt")
  MESSAGE(FATAL_ERROR "Cannot find install manifest: \"/Users/detass_g/Etna/EIP/scribus/scribus/builddir/install_manifest.txt\"")
ENDIF(NOT EXISTS "/Users/detass_g/Etna/EIP/scribus/scribus/builddir/install_manifest.txt")

FILE(READ "/Users/detass_g/Etna/EIP/scribus/scribus/builddir/install_manifest.txt" files)
STRING(REGEX REPLACE "\n" ";" files "${files}")
FOREACH(file ${files})
  MESSAGE(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
  IF(EXISTS "$ENV{DESTDIR}${file}")
	EXEC_PROGRAM(
	  "/opt/local/bin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
	  OUTPUT_VARIABLE rm_out
	  RETURN_VALUE rm_retval
	  )
	IF(NOT "${rm_retval}" STREQUAL 0)
	  MESSAGE(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
	ENDIF(NOT "${rm_retval}" STREQUAL 0)
  ELSE(EXISTS "$ENV{DESTDIR}${file}")
	MESSAGE(STATUS "File \"$ENV{DESTDIR}${file}\" does not exist.")
  ENDIF(EXISTS "$ENV{DESTDIR}${file}")
ENDFOREACH(file)
