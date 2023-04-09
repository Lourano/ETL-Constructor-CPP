//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#include <iostream>
#include "../../../include/etl/implementations/example.h"

std::string ExampleETL::transform(std::string &data) {
    std::string transformed_data = "Transformed " + data;
    std::cout << "Transforming data: " << data << std::endl;
    return transformed_data;
}
