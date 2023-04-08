//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#ifndef ETL_CONSTRUCTOR_EXAMPLE_H
#define ETL_CONSTRUCTOR_EXAMPLE_H

#include "../structure.h"

class ExampleETL: public ETL {

public:
    ExampleETL(Extractor* extractor, Loader* loader) : ETL(extractor, loader) {}
    std::string transform(std::string data);
};

#endif //ETL_CONSTRUCTOR_EXAMPLE_H
