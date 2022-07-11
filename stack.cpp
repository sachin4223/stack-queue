#include<iostream>
using namespace std;
class Stack
{  // porperties
    public:
    int* arr;
    int top;
    int size;

    //bhaebihor
    Stack(int size){
        this->size=size;
        arr=new int(size);
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
           cout<<"stack overflow"<<endl; 
        }

    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;

        }

    }

    int peak(){
        if(top>=0&&top<size){
            return arr[top];

        }
        else{
            cout<<"satck is empty"<<endl;
            return -1;
        }

    }

    bool empty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }



};
int main(){
    Stack s(4);
    s.push(4);
    cout<<s.empty();
}


