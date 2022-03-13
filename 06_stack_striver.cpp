#include<bits/stdc++.h>
using namespace std;
int main(){
    //no iterator in stack;
    //stack use in balance brackets problems
    //and lot of problems
    //last in first out;
    stack<int>st;
    //internal implementation is array and linked list
    //pop
    //top
    //size
    //empty
    //push and emplace
    st.push(2);
    st.push(4);
    st.push(3);
    st.push(1);
    st.push(0);
    cout<<st.top()<<endl;//prints 0;
    st.pop();//deletes the last element; 0
    cout<<st.top()<<endl;//prints 1;
    st.pop();//deletes the last element; 1
    cout<<st.top()<<endl;//prints 3;
    stack<int>st2;
    st2.push(2);
    st2.push(6);
    st2.push(10);
    st2.push(8);
    st2.push(2);
    int n = st2.size();
    for (int i = 0; i < n ; i++)
    {
        cout<<st2.top()<<" ";
        st2.pop();
    }
    cout<<endl;
    //how to delete entire stack
    bool flag = st.empty();// return true if stack is empty ,or false;
    while(!st.empty()){
        st.pop();
    }
    cout<<"size of st "<<st.size()<<endl;
    stack<int>st3;
    cout<<st3.top()<<endl;// this will throw an error;
    stack<int>st4;
    while(!st4.empty()){
        cout<<st4.top()<<endl;//important in competetive programming 
        //always have a check wheather stack is emprty or not;
    }
}