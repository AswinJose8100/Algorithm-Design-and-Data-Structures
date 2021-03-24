#include "LinkedList.h"

LinkedList::LinkedList(){
	header=NULL;
}
LinkedList::LinkedList(int array[],int size){
	Node* temp=(Node*) malloc(sizeof(temp));
	temp->setData(array[0]);
	header=temp;
	Node* iterator=temp;
    for(int j=1;j<size;j++){
    	Node* new_node=(Node*) malloc(sizeof(new_node));
    	new_node->setData(array[j]);
    	iterator->setNext(new_node);
    	iterator=new_node;
    	if(j==size){
    		iterator->setNext(NULL);
    		new_node->setNext(NULL);
    	}
    }

}
void LinkedList::addFront(int newItem){
	Node* temp = (Node *) malloc(sizeof(temp));
    temp->setData(newItem);
    temp->setNext(header);
    header = temp;
}
void LinkedList::addEnd(int newItem){
	Node* temp = (Node *) malloc(sizeof(temp));
    temp->setData(newItem);
    temp->setNext(NULL);
    Node* iterator = header;
    while(iterator->getNext()->getNext()!= NULL){
      iterator = iterator->getNext();
    }
    iterator->setNext(temp);
}
void LinkedList::addAtPosition(int position, int newItem){
	if(position < 1){
      addFront(newItem);
      return;
    }
    int i = 1;
    Node* iterator = header;
    for(;i<position;++i){
      iterator = iterator->getNext();
      if(iterator == NULL){
        addEnd(newItem);
        return;
      }
    }
    
    Node * temp = (Node *) malloc(sizeof(temp));
    temp->setData(newItem);
    temp->setNext(iterator->getNext());
    iterator->setNext(temp);
}
int LinkedList::search(int item){
	int counter = 1;
    Node* iterator = header;
    while(iterator != NULL){
      if(iterator->getData() == item)
      {
        cout << counter << " ";
        return counter;
      }
      iterator = iterator->getNext();
    }
    cout << "0 ";
    return 0;
}
void LinkedList::deleteFront(){
	if(header != NULL){
      Node* temp = header;
      header = header->getNext();
      free(temp);
    }
}
void LinkedList::deleteEnd(){
	if(header != NULL){
      if(header->getNext() == NULL){
        header = NULL;
        return;
      }
      Node* iterator = header;
      while(iterator->getNext()->getNext()!= NULL)
        iterator = iterator->getNext();
      iterator->setNext(NULL);
    }
}
void LinkedList::deletePosition(int position){
	if(position < 1){
      cout << "outside range\n";
      return;
    }
    int i = 1;
    Node* iterator = header;
    for(; i < position; ++i)
    {
      if(iterator == NULL){
        cout << "outside range\n";
        return;
      }
      iterator = iterator->getNext();
    }
}
int LinkedList::getItem(int position){
	Node* iterator=header;
	if(position <=0)
		position=1;
	else{
		for(int i=0;i<position;i++){
			if(iterator->getNext() == NULL && i<position-1){
				std::cout<<std::numeric_limits<int>::max()<<std::endl;
				return std::numeric_limits <int>::max();
			}
			else{
				for(int i=1;i<position;i++){
					if(iterator->getNext()!=NULL)
						iterator=iterator->getNext();
				}
				cout<<iterator->getData()<<" ";
				return iterator->getData();
			}
		}
	}
}
void LinkedList::printItems(){
	 cout<<header->getData()<<" ";
	 Node* iterator;
	 if(header->getNext()!=NULL){
	 	iterator=header->getNext();
	 	cout<<iterator->getData();
	 	while(iterator->getNext()!=NULL){
	 		cout<<" ";
	 		iterator=iterator->getNext();
	 		cout<<iterator->getData();
	 	}	
	 }
	 cout<<endl;
}


