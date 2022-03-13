#include<bits/stdc++.h>
using namespace std;
int main(){
    //all in sorted order;
    //operation O (log n);
    priority_queue<int>maxi;//descending order
    //push;
    //size;
    //top
    //pop
    //empty
    maxi.push(1);
    maxi.push(5);
    maxi.push(2);
    maxi.push(6);
    maxi.push(0);
    cout<<maxi.top()<<endl;//print 6
    maxi.pop();
    cout<<maxi.top()<<endl;//print 5
    priority_queue<pair<int , int>>maxi2;
    maxi2.emplace(1 , 2);
    maxi2.emplace(1 , 5);
    maxi2.emplace(1 , 3);
    maxi2.emplace(1 , 7);
    maxi2.emplace(1 , 0);
    priority_queue<int>mini;
    mini.push(-1);//mini.push(-1 * element);
    mini.push(-5);
    mini.push(-2);
    mini.push(-6);
    mini.push(-0);
    //logical way to print in a ascending order
    cout<<-1*mini.top()<<endl;//print 0
    mini.pop();
    cout<<-1*mini.top()<<endl;//print 1
    priority_queue<int , vector<int> , greater<int>> mini2;
    mini2.push(1);
    mini2.push(5);
    mini2.push(2);
    mini2.push(6);
    mini2.push(0);
    cout<<mini2.top()<<endl;// print 0;
    mini2.pop();
    cout<<mini2.top()<<endl;// print 1;
    priority_queue<pair<int , int> , vector<pair<int , int>> , greater<pair<int , int>>> mini2;
}
