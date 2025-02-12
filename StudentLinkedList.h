#ifndef STUDENTLINKEDLIST_H
#define STUDENTLINKEDLIST_H

#include "StudentNode.h" 

class StudentLinkedList 
{
private:
    StudentNode* mp_head;

public:
    StudentLinkedList() 
    {
        mp_head = nullptr;
    }

    void append(string a_name, int a_rollNumber) 
    {
        StudentNode* l_newNode = new StudentNode(a_name, a_rollNumber);
        if (mp_head == nullptr) 
        {
            mp_head = l_newNode;
            return;
        }
        StudentNode* l_temp = mp_head;
        while (l_temp->mp_next != nullptr) 
        {
            l_temp = l_temp->mp_next;
        }
        l_temp->mp_next = l_newNode;
    }

    void deleteAtIndex(int a_index) 
    {
        if (mp_head == nullptr) 
        {
            cout << "List empty";
            return;
        }

        if (a_index == 0) 
        {
            StudentNode* l_temp = mp_head;
            mp_head = mp_head->mp_next;
            delete l_temp;
            cout << "Index " << a_index << " deleted\n";
            return;
        }

        StudentNode* l_temp = mp_head;
        StudentNode* l_prev = nullptr;
        for (int l_i = 0; l_temp != nullptr && l_i < a_index; l_i++) 
        {
            l_prev = l_temp;
            l_temp = l_temp->mp_next;
        }

        if (l_temp == nullptr) 
        {
            cout << "Index out of range";
            return;
        }

        l_prev->mp_next = l_temp->mp_next;
        delete l_temp;
        cout << "Index " << a_index << " deleted";
    }

    void display() 
    {
        if (mp_head == nullptr) 
        {
            cout << "Student list is empty";
            return;
        }
        StudentNode* l_temp = mp_head;
        while (l_temp != nullptr) 
        `{
            cout << "Name: " << l_temp->m_name << ", Roll Number: " << l_temp->m_rollNumber << endl;
            l_temp = l_temp->mp_next;
        }
    }
};

#endif 
