cmake_minimum_required(VERSION 3.5.0)


set(SOURCES main.cpp uimainwindow.cpp qstr.cpp)
set(HEADERS ${MY_INCLUDE_DIR}/uimainwindow.h ${MY_INCLUDE_DIR}/qstr.h)
set(SOURCESUI uiparse.ui)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
if(WIN32)
    message ("Set path QT for WIN32 ...")
    set(CMAKE_PREFIX_PATH "C:/Qt/5.15.2/mingw81_64/lib/cmake")
endif()
if(UNIX)
    message ("Set path QT for Linux ...")
    set(CMAKE_PREFIX_PATH "/home/oktan/Qt/5.15.2/gcc_64/lib/cmake")
endif()


message("Looking for Qt...")

find_package(Qt5 COMPONENTS Core Gui Widgets REQUIRED)

if(${Qt5_FOUND})
    message("Found Qt " ${Qt5_VERSION})
else()
    message("Could`t find Qt")
endif()
qt5_wrap_cpp (MOC_SOURCES ${HEADERS})
qt5_wrap_ui (MOC_SOURCESUI ${SOURCESUI})


add_executable(Uialpha ${SOURCES} ${MOC_SOURCES} ${MOC_SOURCESUI} )

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads)

target_link_libraries(Uialpha Threads::Threads)
target_link_libraries(Uialpha Qt5::Core Qt5::Gui Qt5::Widgets)
target_include_directories(Uialpha PUBLIC ${MY_INCLUDE_DIR})
