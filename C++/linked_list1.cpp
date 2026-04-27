#include<iostream>
using namespace std;

class node{
public :
    int data;
    node* next;

    node(int val){
        data = val;
        next= NULL;
    }

};

class list {
    Node*  head;
    Node* tail;

public:
    List(){
    head = tail = NULL;
    }
    void push_front(int val){
    Node* newNode = new Node (val);
    if(head == Null){
        head = tail = newNode;
        return;
    }else{
        newNode->next = head;
        head = newNode;
        }
    }
};
int main(){
    List ll;
    return 0;
}
