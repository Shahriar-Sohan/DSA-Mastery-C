#include <iostream>
using namespace std;

struct Node {
public:
    int data;
    Node* next;

    //Constructor
    Node(int value){
        data = value;
        next = nullptr;
    }
};

class LinkedList{
public:
    Node* head;

    LinkedList(){
        head = nullptr;
    }

    void insert(int val){
        Node* newNode = new Node(val);
        if(head == nullptr){
            head = newNode;
            return;
        }
        Node* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
    }

    
};








int main(){
    
    //creating Nodes
    Node* firstNode = new Node(10);
    Node* secondNode = new Node(20);
    Node* thirdNode = new Node(30);



    return 0;
}