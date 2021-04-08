//
// Created by Keith Lancaster on 4/8/21.
//

#ifndef TEMPLATE_INHERITANCE_MYARRAY_H
#define TEMPLATE_INHERITANCE_MYARRAY_H


#include <cstdio>
#include <string>

class MyArray {
protected:
    std::string name;
    std::string description;
public:
    MyArray(const std::string& newName, const std::string& description);
    virtual ~MyArray()= default;
};


#endif //TEMPLATE_INHERITANCE_MYARRAY_H
