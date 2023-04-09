//
// Created by Bohdan Zhuravel on 08/04/2023.
//
#include "../../include/etl/structure.h"


template <typename T>
T Extractor<T>::extract() {
    return T();
}

template <typename T>
bool Loader<T>::load(T &data) {
    return false;
}

template <typename T>
T ETL<T>::extract() {
    return extractor_ -> extract();
}

template <typename T>
bool ETL<T>::load(T &data) {
    return loader_ -> load(data);
}

template <typename T>
T ETL<T>::transform(T &data) {
    return T();
}

template <typename T>
void ETL<T>::run() {
    T data = extractor_->extract();
    data = transform(data);
    loader_->load(data);
}
