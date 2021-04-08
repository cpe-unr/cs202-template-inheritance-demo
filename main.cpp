#include <iostream>
#include "MyArray.h"
#include "Array1D.h"
#include "Array2D.h"
#include "Array1DSpecial.h"

int main() {
    Array1D<int,100> mm("Todd","an array of Todds");
    mm.addElement(1234);

    Array1DSpecial<int, 100> as("Fred", "whatever at this point");
    as.printTypeName();

    Array2D<float,5,5> twoDArray("Tim", "an array of floating Tims");
    twoDArray.setElement(3.4,2,2);
    twoDArray.daDoRunRun();
    return 0;
}
