//Kaleigha Hayes
//1313037

#include "CirculardoubleLinklist.h"
#include <iostream>
using namespace std;


CirculardoubleLinklist::~CirculardoubleLinklist() 
{

    if (!Head) return;

    Node* current = Head;

    do {

        Node* next = current->next;

        delete current;

        current = next;

    } while (current != Head);

}



void CirculardoubleLinklist::append(double data) 
{

 Node* newNode = new Node(data);

    if (!Head) 
    {

        Head = newNode;

        newNode->next = newNode;

        newNode->prev = newNode;

    }
    else {

        Node* last = Head->prev;

        last->next = newNode;

        newNode->prev = last;

        newNode->next = Head;

        Head->prev = newNode;

    }

}



void CirculardoubleLinklist::display() 
{

    if (!Head) return;

    Node* current = Head;

    do {

        cout << current->data << " ";

        current = current->next;

    } while (current != Head);

    cout << endl;

}



void CirculardoubleLinklist::performAssignments() 
{

    if (!Head) return;

    Head->next->next->next = Head->prev;

    Head->prev->prev->prev = Head->next->next->next->prev;

    Head->next->next->next->prev = Head->prev->prev->prev;

    Head->next = Head->next->next;

    Head->next->prev->next = Head->next->next->next;

}



Node* CirculardoubleLinklist::getHead() 
{

    return Head;

}
