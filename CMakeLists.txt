cmake_minimum_required(VERSION 3.2)

PROJECT(20200119 )

# target_link_libraries(20200119
# "H:\\Program Files\\mingw32_gcc10\\lib"
# )
if( MINGW )
    if( CMAKE_BUILD_TYPE STREQUAL "Debug" )
        # set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O0 -g -Wall -Wunused-function -pthread")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -O2 -g   -Wall ")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -g -pthread")
        message("MINGW - Debug mode")
    elseif( CMAKE_BUILD_TYPE STREQUAL "Release" ) # debug
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O2 -pthread -Wunused-function")
        set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99 -O2 -pthread")
        message("MINGW - Release mode")
    endif() # Debug
    #
    if( PROJECT_ARCHITECTURE STREQUAL "x64" ) # x64
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64")
    elseif(PROJECT_ARCHITECTURE STREQUAL "x86") # x86
    set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m32")
    endif() # x64
    #set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} " )
    set( CMAKE_EXECUTABLE_SUFFIX ".exe" )
endif() # MINGW
if(MSVC)
    if( CMAKE_BUILD_TYPE STREQUAL "Debug" )
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
    elseif(CMAKE_BUILD_TYPE STREQUAL "Release")
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /std::c++11 /fp:fast /Gy /Oi /Oy /O0 /Ot /Zi /EHsc ")
    endif()
    if(CMAKE_CL_64)
        set( PROJECT_ARCHITECTURE "x64" )
    else(CMAKE_CL_64)
        set( PROJECT_ARCHITECTURE "x86" )
    endif(CMAKE_CL_64)
    #
    ADD_DEFINITIONS(-D_CRT_SECURE_NO_WARNINGS)
    #
    set( CMAKE_EXECUTABLE_SUFFIX ".exe" )
endif()
file(GLOB main_HDRS ${RootDir}/*.h)
file(GLOB main_SRCS ${RootDir}/*.cpp)
file(GLOB main_SRCS ${RootDir}/*.hpp)



include_directories(
    20200119 PUBLIC
    ${RootDir},
    #"H:\\Program Files\\boost_1_73_0",
    "H:\\Program Files\\mingw64\\mingw64\\include",
    # "H:\\Program Files\\boost_1_73_0\\libs\\numeric\\ublas\\test"
    "H:\\Program Files\\x86_64-5.4.0-release\\mingw64\\include"
)
include_directories(
    20200119 PUBLIC

#    "H:\\Program Files\\mingw32_gcc10\\include\\c++\\10.1.1"
#    "H:\\Program Files\\mingw32_gcc10\\include\\c++\\10.1.1\\backward" 
#    "H:\\Program Files\\mingw32_gcc10\\include"    
)
add_executable(20200119 20200119.cpp)