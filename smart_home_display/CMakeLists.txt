project(smart_home_display)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(SRC ${CMAKE_CURRENT_LIST_DIR}/src)
set(INC ${CMAKE_CURRENT_LIST_DIR}/inc)
set(TST ${CMAKE_CURRENT_LSIT_DIR}/test)
set(FORMS ${CMAKE_CURRENT_LIST_DIR}/forms)


#target_sources( smart_home_display 
#   PRIVATE
	#SOURCE
#       ${CMAKE_CURRENT_LIST_DIR}/main.cpp
#	${SRC}/MainWindow.cpp
#	${INC}/MainWindow.h
#	${FORMS}/MainWindow.ui
#
#)

#target_include_directories( smart_home_display
#	PRIVATE
#	#INCLUDE
#	${INC}
#)

add_executable( smart_home_display 
    ${CMAKE_CURRENT_LIST_DIR}/main.cpp
    ${SRC}/SmartHub.cpp
    ${INC}/SmartHub.h
    ${SRC}/SmartHub.ui
)

target_link_libraries( smart_home_display
    PRIVATE
	Qt5::Widgets
	Qt5::Core
	Qt5::Gui        
)
