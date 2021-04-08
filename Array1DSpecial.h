//
// Created by Keith Lancaster on 4/8/21.
//

#ifndef TEMPLATE_INHERITANCE_ARRAY1DSPECIAL_H
#define TEMPLATE_INHERITANCE_ARRAY1DSPECIAL_H

#include "Array1D.h"
#include <iostream>
#include <typeinfo>



template<typename T, size_t S>
class Array1DSpecial : public Array1D<T,S> {
    T dummy;
public:
    explicit Array1DSpecial(const std::string& name, const std::string& description) : Array1D<T,S>(name, description) {
    }
    void printTypeName(){
        std::cout << typeid(dummy).name()  << std::endl;
    }
};


#endif //TEMPLATE_INHERITANCE_ARRAY1DSPECIAL_H
