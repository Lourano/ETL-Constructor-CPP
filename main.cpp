//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#include <iostream>
#include "etl/components/extractors.h"
#include "etl/components/loaders.h"
#include "etl/implementations/example.h"


int main() {
    SimpleExtractor extractor;
    SimpleLoader loader;
    ExampleETL etl(&extractor, &loader);

    etl.run();

}
