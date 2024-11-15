// create node statically

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main(){
    Node A1;
    A1.data = 5;
    A1.next = NULL;
}