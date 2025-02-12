#ifndef STUDENTNODE_H
#define STUDENTNODE_H

#include <iostream>
using namespace std;

struct StudentNode 
{
    string m_name;
    int m_rollNumber;
    StudentNode* mp_next;

    StudentNode(string a_name, int a_rollNumber) 
    {
        m_name = a_name;
        m_rollNumber = a_rollNumber;
        mp_next = nullptr;
    }
};

#endif 
