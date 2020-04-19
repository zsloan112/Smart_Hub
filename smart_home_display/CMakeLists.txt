set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(SRC ${CMAKE_CURRENT_LIST_DIR}/src)
set(INC ${CMAKE_CURRENT_LIST_DIR}/inc)
set(TST ${CMAKE_CURRENT_LSIT_DIR}/test)

add_executable( smart_home_display )
target_sources( smart_home_display 
    PRIVATE
	#SOURCE
        ${CMAKE_CURRENT_LIST_DIR}/main.cpp
	${SRC}/Device.cpp
        #INCLUDE
	${INC}/Device.h
)

target_include_directories( smart_home_display
	PRIVATE
	#INCLUDE
	${INC}
)


target_link_libraries( smart_home_display
    PRIVATE
	Qt5::Widgets        
)


