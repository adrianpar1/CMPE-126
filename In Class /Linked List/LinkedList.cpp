#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

class LinkedList{
private:
    Node * head;
    Node * tail;

public:
    LinkedList(){
        head = new Node();
        tail = head;
    }

    ~LinkedList(){
        Node *p = head;
        while (p != NULL){
            Node *p2 = p;
            delete p;
            p=p2->next;
        }
    }

    void print(){
        Node *p = head;
        while (p != NULL){
            cout << p->data << endl;
            p=p->next;
        }
    }

    void insertEnd(int n){
        Node *n3= new Node;
        n3->next = NULL; 

        if(tail !=NULL){
            tail->next = n3;
        }

        tail->next = n3;
        tail=n3;

        if(head==NULL){
            head=n3;
        }
    }

    void removeHead(){
        Node *p = head -> next;
        delete head;
        head = p;
    }



};

int main() {

return 0;
}


