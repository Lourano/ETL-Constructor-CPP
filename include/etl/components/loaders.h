//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#ifndef ETL_CONSTRUCTOR_LOADERS_H
#define ETL_CONSTRUCTOR_LOADERS_H

#include <string>
#include "../structure.h"

class SimpleLoader: public Loader<std::string> {
    bool load(std::string &data);
};


#endif //ETL_CONSTRUCTOR_LOADERS_H
