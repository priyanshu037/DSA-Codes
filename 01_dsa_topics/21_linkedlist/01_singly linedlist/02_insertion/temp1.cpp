// insertion at starting of the linked list

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

int main(){
    Node *Head;
    Head = new Node(4);

    cout<<"data :"<<Head->data<<endl;
    cout<<"next :"<<Head->next<<endl;

}