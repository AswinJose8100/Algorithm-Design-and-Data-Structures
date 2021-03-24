#include "Node.h"

Node::Node(){
	
}
int Node::getData(){
	return data;
}
Node* Node::getNext(){
	return next;
}
void Node::setData(int val){
	data=val;
}
void Node::setNext(Node* v){
	next=v;
}