#include "StudentLinkedList.h"

int main() {
    StudentLinkedList l_students;

    l_students.append("A", 1);
    l_students.append("B", 2);
    l_students.append("C", 3);
    l_students.append("D", 4);

    cout << "Student List\n";
    l_students.display();

    cout << "Deleting record at index 2\n";
    l_students.deleteAtIndex(2);

    cout << "Updated Student List\n";
    l_students.display();

    return 0;
}
