cmake_minimum_required(VERSION 3.9.2)
project(Homework_1)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Homework1 waybill_spliter/main.c waybill_spliter/product_struct.h waybill_spliter/console_communication.c waybill_spliter/console_communication.h waybill_spliter/waybill_split.c waybill_spliter/waybill_split.h)

set(HEADER_FILES
        waybill_spliter/waybill_split.h
        )

set(SOURCE_FILES
        waybill_spliter/waybill_split.c
        )

add_library(Homework_1 STATIC ${SOURCE_FILES} ${HEADER_FILES})

add_subdirectory(Google_tests)
