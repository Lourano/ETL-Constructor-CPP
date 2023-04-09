//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#ifndef ETL_CONSTRUCTOR_EXAMPLE_H
#define ETL_CONSTRUCTOR_EXAMPLE_H

#include <iostream>
#include <string>

#include "../structure.h"

class ExampleETL: public ETL<std::string> {

public:
    ExampleETL(Extractor<std::string>* extractor, Loader<std::string>* loader) : ETL<std::string>(extractor, loader) {}
    std::string transform(std::string &data);
};

#endif //ETL_CONSTRUCTOR_EXAMPLE_H
