cmake_minimum_required(VERSION 3.8)
project( tensor_on_c LANGUAGES CXX)
find_package( OpenCV 4.0 REQUIRED )

include_directories( ${OpenCV_INCLUDE_DIRS} )

include_directories( ${CMAKE_SOURCE_DIR}/includes/tensor/
                     ${CMAKE_SOURCE_DIR}/includes/definition )


file(GLOB SOURCES
    "src/*.cpp"
    "src/tensor/*.cpp"
    "src/tensor/*.cu"
    # "src/essential/basefunc/*.cpp"/
    # "src/essential/network/*.cpp"
    # "src/essential/tensor/*.cpp"
)
add_executable( tensor ${SOURCES} )  #c/cpp 파일 들끼리 link 작업을 하여, executable 파일 생성

target_link_libraries( tensor ${OpenCV_LIBS} ) # 라이브러리 연결
