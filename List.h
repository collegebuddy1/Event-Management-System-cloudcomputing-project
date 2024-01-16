#include <iostream>
#include <iomanip>
#include "Event.h"
#include "Array.h"
#include "Date.h"
using namespace std;

template<class Type> class List{

     template <class T> class Node{
        friend class List;
        private:
            Node* next;
            T event;
    };
    public:
        List();
        ~List();
        void print();
        void add(Type);
        void copy(Array&);

    private:
        Node<Type>* head;

};


//WHY DO WE USE TEMPLATES IN SCENRIOS LIKE THESE?

template <typename Type>
List<Type>::List(){
    head = NULL;
}
template <typename Type>
List<Type>::~List(){
    Node<Type> *currNode,*nextNode;
    currNode = head;

    while (currNode!= NULL){
        nextNode = currNode->next;
        delete currNode->event;
        delete currNode;
        currNode = nextNode;
    }
}

/*
  Function:  add
  Purpose:   adds an event to the list 
  Parameters:
    in:      event pointer
    
*/
template <typename Type>
void List<Type>::add(Type e){

        //Dynamically allocates new node
        Node<Type> *newNode = new Node<Type>();
        //Sets that new node to the event e
        newNode->event = e;

        //If list is empty set the newNode to the head
        if (head == NULL){
            head = newNode;

        }
        
        //else declare two more nodes one to keep track of the current node and one to keep track of previous node
        else {
            Node<Type> *currNode;
            Node<Type> *prevNode;

            currNode = head;

            //While current node has not reached the end
            while (currNode!=NULL){
                //Compare the current to the new node to compare dates if it is less than break out of the program since we have found the position
                if (*(newNode->event) < currNode->event){
                    break;

                }
                //Otherwise shift everything by one so set the current node to the next node and the previous node to the current node
                else{
                    prevNode = currNode;
                    currNode = currNode->next;
                }
            }
            
            //If the while statement breaks while the current node is the head set the new node next to the current node and then set the head to new node
            if (currNode == head){
                newNode->next = head;
                head = newNode;

            }
            //Otherwise if its in the middle then set the previous next to the new node and the new node next to the current node
            else{
                prevNode->next = newNode;
                newNode->next = currNode;
                
            }
            
        }        
    
}


/*
  Function:  prints
  Purpose:   to print the list of events
  Parameters:
    
*/
template <typename Type>

void List<Type>::print(){
    Node<Type> *currentNode;
    currentNode = head;
    while (currentNode!=NULL){
        currentNode->event->print();
        currentNode = currentNode->next;
    }

}

/*
  Function:  copy
  Purpose:   to copy events from the linked list into the array
  Parameters: in array that is referenced
    
*/
template <typename Type>
void List<Type>::copy(Array& a){
    Node<Type> *currNode;

    currNode = head;

    while (currNode!= NULL){
        a.add(currNode->event);
        currNode = currNode->next;
    }
}
