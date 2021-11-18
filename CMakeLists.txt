cmake_minimum_required(VERSION 3.17)
project(MessengerCount)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES
        dm.cpp
        groupMessage.cpp
        snapchat.cpp)

add_executable(MessengerCount ${SOURCE_FILES})

set(DM
        dm.cpp)

add_executable(DM ${DM})

set(GROUP_MESSAGE
        groupMessage.cpp)

add_executable(Group_Message ${GROUP_MESSAGE})

set(SNAPCHAT
        snapchat.cpp)

add_executable(Snapchat ${SNAPCHAT})
