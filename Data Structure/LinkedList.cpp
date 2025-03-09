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
private:
    Node* head;
public:

    LinkedList(){
        head = nullptr;
    }

    void insertBgn(int val){
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }
    void display(){
        Node* temp = head;
        while(temp != nullptr){
            cout<< temp->data<<"->";
            temp = temp->next;
        }
        cout << "Null"<< endl;
    }

    
};








int main(){
    
    // //creating Nodes
    // Node* firstNode = new Node(10);
    // Node* secondNode = new Node(20);
    // Node* thirdNode = new Node(30);

    // firstNode->next = secondNode;
    // secondNode->next = thirdNode;

    // Node* temp = firstNode;
    // while(temp != nullptr){
    //     cout << temp->data << " -> ";
    //     temp = temp->next;
    // }
    LinkedList list;

    list.insertBgn(10);
    list.insertBgn(20);
    list.insertBgn(30);

    list.display();




    return 0;
}