#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int>d;
    d.push_front(12);
    d.push_back(14);
    cout<<d.front()<<endl;    
    cout<<d.back()<<endl<<endl; 

    d.pop_front();

     cout<<d.front()<<endl;    
     cout<<d.back()<<endl<<endl;

     d.pop_back();
    //  cout<<d.front()<<endl;    
    //  cout<<d.back()<<endl<<endl;
    if(d.empty()){
        cout<<"deque is empty"<<endl<<endl;
    }
    else{
        cout<<"deque is not empty"<<endl<<endl;
    }





    return 0;
}