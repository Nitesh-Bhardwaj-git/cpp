#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

//  Insertion at the begining
void InsertAtBegining(Node*& head, int value){
    Node* newNode= new Node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}
void Print(Node* head) {
    Node* temp=head;
    while (temp!=nullptr) {
        cout<<temp->data<< ","<<endl;
        temp=temp->next;
    }   
}
int main() {
    Node* head=nullptr;
    InsertAtBegining(head, 10);
    InsertAtBegining(head, 20);
    InsertAtBegining(head, 30);
    cout<<"inserting at the beginning: ";
    Print(head);
