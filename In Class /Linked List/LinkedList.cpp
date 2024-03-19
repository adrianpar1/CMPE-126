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
    int size;

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
        //1. Create node newNode
        //2. tail->next = newNode
        //3. tail = newNode
        //4. if was empty, set head
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


    void insertFront(int n){
        Node *newNode = new Node;
        newNode->next=head;
        head=newNode;

        if(tail==nullptr){
            tail=head;
        }
    }

    void removeFront(int n){
        Node* temp = head;
        head=head->next;
        delete temp;

        if(head==nullptr){
            tail=head;
        }
    }

    void removeEnd(){

    }

    template <class type>
    type retreiveAt(int pos){
       int index=0;
       Node *temp;
       temp=head;
       

       while (temp){
        if (index==position){
            return temp;//or return temp->data;
        }
        
        else temp=temp->next;
        ++index;
       }

    }


};

int main() {

return 0;
}


