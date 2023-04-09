//
// Created by Bohdan Zhuravel on 08/04/2023.
//
#include "../../include/etl/structure.h"


template <typename T>
T ETL<T>::extract() {
    return extractor_ -> extract();
}

template <typename T>
bool ETL<T>::load(T &data) {
    return loader_ -> load(data);
}

template <typename T>
void ETL<T>::run() {
    T data = extract();
    T transformed = transform(data);
    bool success = load(data);

    std::cout << "Success: " << success << std::endl;
}

template class ETL<std::string>; // # TODO Completely wrong solution.
