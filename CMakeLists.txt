cmake_minimum_required(VERSION 3.10)

# Set the project name
project(ETL-Constructor)

# Create the executable target and specify the source file
add_executable(ETL-Constructor main.cpp etl/structure.cpp etl/structure.h etl/components/extractors.cpp etl/components/extractors.h etl/components/loaders.cpp etl/components/loaders.h etl/implementations/example.cpp etl/implementations/example.h)