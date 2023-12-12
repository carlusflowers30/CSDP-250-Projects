//Kaleigha Hayes
//1313037
#ifndef CirculardoubleLinklist_h
#define CirculardoubleLinklist_h

class Node 
{
public:

	double data;
	Node* next;
	Node* prev;
	Node(double data);
};
class CircularDoublyLinkedList 
{

public:
	CircularDoublyLinkedList();
	~CircularDoublyLinkedList();
	void append(double data);
	void display();
	void performAssignments();
	Node* getHead();

private:
	Node* Head;
};



#endif
