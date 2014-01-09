INCLUDE_DIRECTORIES(
${CMAKE_SOURCE_DIR}
${CMAKE_SOURCE_DIR}/scribus
)

SET(MY_PLUGIN_MOC_CLASSES
opendtp.h
opendtp_server.h
opendtp_params.h
opendtp_scriptercore.h
opendtp_document.h
logging.h
socket_thread.h
Jzon.h
JsonResponse.h
IResponse.h
)

SET(MY_PLUGIN_SOURCES
opendtp.cpp
opendtp_server.cpp
opendtp_params.cpp
opendtp_scriptercore.cpp
opendtp_document.cpp
logging.cpp
socket_thread.cpp
Jzon.cpp
JsonResponse.cpp
)

SET(SCRIBUS_MY_PLUGIN "opendtp")

QT4_WRAP_CPP(MY_PLUGIN_MOC_SOURCES ${MY_PLUGIN_MOC_CLASSES})

ADD_LIBRARY(${SCRIBUS_MY_PLUGIN} MODULE ${MY_PLUGIN_SOURCES} ${MY_PLUGIN_MOC_SOURCES})

TARGET_LINK_LIBRARIES(${SCRIBUS_MY_PLUGIN} ${PLUGIN_LIBRARIES})

INSTALL(TARGETS ${SCRIBUS_MY_PLUGIN}
  LIBRARY
  DESTINATION ${PLUGINDIR}
  PERMISSIONS ${PLUGIN_PERMISSIONS}
)

# SET_TARGET_PROPERTIES(${SCRIBUS_FONTPREVIEW_PLUGIN} PROPERTIES VERSION "0.0.0")