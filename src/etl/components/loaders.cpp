//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#include <iostream>
#include "../../../include/etl/components/loaders.h"



 bool SimpleLoader::load(std::string data) {
    std::cout << "Loaded successfully" << std::endl;
    return true;
}
