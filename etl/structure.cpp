//
// Created by Bohdan Zhuravel on 08/04/2023.
//
#include <string>
#include "structure.h"


std::string Extractor::extract() {
    return std::string();
}

bool Loader::load(std::string) {
    return false;
}


std::string ETL::extract() {
    return extractor_ -> extract();
}

bool ETL::load(const std::string& data) {
    return loader_ -> load(data);
}

std::string ETL::transform(std::string data) {
    return std::string();
}


void ETL::run() {
    std::string extracted_data = extract();
    std::string transformed_data = transform(extracted_data);
    load(transformed_data);
}
