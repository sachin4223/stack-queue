#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="sachin";
    stack<char>ch;
    for(int i=0;i<s.length();i++){
        ch.push(s[i]);
    }
    string ans="";
    while(!ch.empty()){
        char x=ch.top();
        ans.push_back(x);
        ch.pop();
    }
    cout<<"Reverse string is:"<<ans<<endl;

    return 0;
}