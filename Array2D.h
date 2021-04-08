//
// Created by Keith Lancaster on 4/8/21.
//

#ifndef TEMPLATE_INHERITANCE_ARRAY2D_H
#define TEMPLATE_INHERITANCE_ARRAY2D_H

#include "MyArray.h"
#include "IRunnable.h"

template<typename T, size_t ROW, size_t COL>
class Array2D : public MyArray, IRunnable {
    T buffer[ROW][COL];
public:
    Array2D(const std::string& name, const std::string& description) : MyArray(name, description){
        for(size_t r = 0; r < ROW; r++){
            for(size_t c = 0; c < COL; c++){
                buffer[r][c] = 0.0;
            }
        }
    };

    void daDoRunRun() override {
        std::cout << "da do run run" << std::endl;

    }

    T getArrayValue(size_t row, size_t column){
        return buffer[row][column];
    }

    T getLastValue() {
        return buffer[ROW-1][COL-1];
    }

    void setElement(T element, size_t row, size_t column){
        if(row < ROW && column < COL){
            buffer[row][column] = element;
        }
    }
    T& getElement(T element, size_t row, size_t column){
        if(row < ROW && column < COL){
           return buffer[row][column];
        } else {
            throw std::invalid_argument("Indices out of bounds");
        }
    }

};


#endif //TEMPLATE_INHERITANCE_ARRAY2D_H
