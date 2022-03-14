#include<bits/stdc++.h>
using namespace std;
int main(){
    //no iterator in queue;
    //Queue is always follows first in first out
    //push;
    //front;
    //pop;
    //size;
    //empty; 
    queue<int>q;
    q.push(6);
    q.push(4);
    q.push(8);
    q.push(2);
    q.push(2);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    while (!q.empty())
    {
        cout<<q.front()<<" ";//deletes entire queue
        q.pop();
    }
    cout<<endl;
    queue<int>q1;
    q1.push(5);
    q1.push(10);
    q1.push(15);
    q1.push(20);
    q1.push(25);
    //deletion is linear time
    while (!q1.empty())
    {
        q1.pop();//deletes entire queue
    }
    cout<<"size of the q "<<q1.size()<<endl;
    //time complexicity is big O (1);
}
