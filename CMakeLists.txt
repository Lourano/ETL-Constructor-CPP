cmake_minimum_required(VERSION 3.10)

project(ETL-Constructor)
include_directories(include)
add_executable(ETL-Constructor
        main.cpp
        src/etl/structure.cpp
        src/etl/components/extractors.cpp
        src/etl/components/loaders.cpp
        src/etl/implementations/example.cpp
        )

set(CMAKE_CXX_STANDARD 11)
target_include_directories(ETL-Constructor PUBLIC include)
target_link_libraries(ETL-Constructor PRIVATE pthread)