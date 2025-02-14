// add.h

#ifndef ADD_H
#define ADD_H

bool add(const int* a_operand1, const int* a_operand2, int* a_result);

bool add(const int& a_operand1, const int& a_operand2, int& a_result);

#endif 



// add.cpp

#include "add.h"

bool add(const int* a_operand1, const int* a_operand2, int* a_result) {
    if (!a_operand1 || !a_operand2 || !a_result) {
        return false;  
    }
    *a_result = *a_operand1 + *a_operand2;
    return true;
}

bool add(const int& a_operand1, const int& a_operand2, int& a_result) {
    a_result = a_operand1 + a_operand2;
    return true;
}

// main.cpp

#include <iostream>
#include "add.h"

int main() {
    int l_num1 = 4, l_num2 = 5, l_result;

    // Using pointers
    if (add(&l_num1, &l_num2, &l_result)) {
        std::cout << "Sum using pointers: " << l_result << std::endl;
    } else {
        std::cout << "Error in pointer addition" << std::endl;
    }

    // Using references
    if (add(l_num1, l_num2, l_result)) {
        std::cout << "Sum using references: " << l_result << std::endl;
    } else {
        std::cout << "Error in reference addition" << std::endl;
    }

    return 0;
}
