#include "CirculardoubleLinklist.h"
#include <iostream>
using namespace std;

int main ()
{

 CirculardoubleLinklist list;



    for (int i = 1; i <= 5; i++) 
    {

        list.append(i * 11);

    }

    cout << "The Initial list: ";

    list.display();


    list.performAssignments();

    cout << "After you perform assignments: ";

    list.display();


    Node* current = list.getHead();

    cout << "\t1st node\t2nd node\t3rd node\t4th node\t5th node" << endl;

    cout << "Node value\t";

    do 
    {

        cout << current->data << "\t\t";

        current = current->next;

    } while (current != list.getHead());

    cout << endl;



    current = list.getHead();

    cout << "Value of the previous node\t";

    do 
    {

        cout << current->prev->data << "\t\t";

        current = current->next;

    } while (current != list.getHead());

    cout << endl;



    current = list.getHead();

    cout << "Value of next node\t";

    do 
    {

        cout << current->next->data << "\t\t";

        current = current->next;

    } while (current != list.getHead());

    cout << endl;

    return 0;