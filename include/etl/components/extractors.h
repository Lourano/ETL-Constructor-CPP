//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#ifndef ETL_CONSTRUCTOR_EXTRACTORS_H
#define ETL_CONSTRUCTOR_EXTRACTORS_H

#include <string>
#include "../structure.h"

class SimpleExtractor: public Extractor<std::string> {
public:
    std::string extract();
};


#endif //ETL_CONSTRUCTOR_EXTRACTORS_H
