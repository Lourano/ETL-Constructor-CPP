//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#include "include/etl/components/extractors.h"
#include "include/etl/components/loaders.h"
#include "include/etl/implementations/example.h"


int main() {
    SimpleExtractor extractor;
    SimpleLoader loader;
    ExampleETL etl(&extractor, &loader);

    etl.run();

}
