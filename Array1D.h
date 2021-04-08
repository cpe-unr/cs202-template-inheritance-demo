//
// Created by Keith Lancaster on 4/8/21.
//

#ifndef TEMPLATE_INHERITANCE_ARRAY1D_H
#define TEMPLATE_INHERITANCE_ARRAY1D_H

#include "MyArray.h"

template<typename T, size_t S>
class Array1D : public MyArray {
    T buffer[S];
    size_t lastElement = S - 1;
    size_t lastFilledElement = 0;
public:
    T getFirstValue(){
        return buffer[0];
    }

    explicit Array1D(const std::string& name, const std::string& description) : MyArray(name, description) {
    }

    T getLastValue() {
        return buffer[S - 1];
    }

    bool addElement(T element){
        if(lastFilledElement < lastElement){
            buffer[lastFilledElement++] = element;
            return true;
        }
        return false;
    }

};
#endif //TEMPLATE_INHERITANCE_ARRAY1D_H
