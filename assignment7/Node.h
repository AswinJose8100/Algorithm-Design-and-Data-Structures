// Node.h
#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node{
public:
	int data;
	Node* next;
	// returns the value of data
	int getData();
	// retuens next
	Node* getNext();
	// sets data=value
	void setData(int val);
	// sets next=v
	void setNext(Node* v);
	// Default constructor of class Node
	Node();
};
#endif // NODE_H
