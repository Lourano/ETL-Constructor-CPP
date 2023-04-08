//
// Created by Bohdan Zhuravel on 08/04/2023.
//

#ifndef ETL_CONSTRUCTOR_STRUCTURE_H
#define ETL_CONSTRUCTOR_STRUCTURE_H

#include <string>

class Extractor {

public:
    virtual ~Extractor() {}
    virtual std::string extract();

};

class Loader {

public:
    virtual ~Loader() {}
    virtual bool load(std::string);
};

class ETL {

public:
    ETL(Extractor* extractor, Loader* loader) : extractor_(extractor), loader_(loader) {}

    std::string extract();
    virtual std::string transform(std::string data); // TODO Here std::string have to be changed on self data type
    bool load(const std::string& data);
    void run();

protected:
    Extractor *extractor_;
    Loader *loader_;
};


#endif //ETL_CONSTRUCTOR_STRUCTURE_H
