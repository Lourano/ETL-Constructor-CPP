//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#ifndef ETL_CONSTRUCTOR_LOADERS_H
#define ETL_CONSTRUCTOR_LOADERS_H

#include "../structure.h"

class SimpleLoader: public Loader {
    bool load(std::string data);
};


#endif //ETL_CONSTRUCTOR_LOADERS_H
