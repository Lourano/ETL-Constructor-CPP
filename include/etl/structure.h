//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#ifndef ETL_CONSTRUCTOR_STRUCTURE_H
#define ETL_CONSTRUCTOR_STRUCTURE_H

#include <iostream>
#include <string>

template <typename T>
class Extractor {

public:
    virtual ~Extractor() {}
    virtual T extract() {};

};

template <typename T>
class Loader {

public:
    virtual ~Loader() {}
    virtual bool load(T &data) {};
};

template <typename T>
class ETL {

public:
    ETL(Extractor<T> *extractor, Loader<T> *loader): extractor_(extractor), loader_(loader) {}

    T extract();
    virtual T transform(T &data) {};
    bool load(T &data);
    void run();

protected:
    std::shared_ptr<Extractor<T> > extractor_;
    std::shared_ptr<Loader<T> > loader_;
};


#endif //ETL_CONSTRUCTOR_STRUCTURE_H
