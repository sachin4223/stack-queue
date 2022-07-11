#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        while(this->next!=NULL){
            this->next=NULL;
            delete next;
        }
    }

};
class Stack{
    public:
    Node* head;
    int size;
    Stack(){
        this->size=0;
        this->head=NULL;
    }

    void push(int data){
        Node* temp=new Node(data);
        temp->data=data;
        temp->next=head;
        head=temp;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty"<<endl;
        }
        else{
            Node* temp=head;
            head=head->next;
            delete temp;
        }
    }

    int peak(){
        int val=head->data;
        return val;
    }


};
int main(){
    Stack st;
    st.pop();
    st.push(9);
    st.push(0);
    st.push(7);
    cout<<"top element of stack:"<<st.peak();



}