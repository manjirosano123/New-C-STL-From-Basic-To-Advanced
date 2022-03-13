#include<bits/stdc++.h>
using namespace std;
int main(){
    array<int , 5>arr1 = {1 , 2 , 5}; // = {1 2 5 0 0 }
    cout<<arr1.at(1)<<endl;//{2};

    array<int , 10>arr2 = {1}; // {1 0 0 0 0 0 0 0 0 0 }
    int arr3[10] = {0}; // {0 0 0 0 0 0 0 0 0 0 }

    //function which fill entire array with the given value;
    array<int , 5>arr4;
    arr4.fill(5 );    // {5 , 5 , 5 , 5 , 5}

    //this function gives the the index value;
    arr4.at(4);
    for (int i = 0; i < 5; i++)
    {
        cout<<arr4.at(i)<<" ";
    }
    cout<<endl;
    // iterators
    //begin() , end() , rbegin() , rend();
    array<int , 7>arr5 = {2 , 4 , 6 , 8 , 10 , 12 , 14};
    for (auto it = arr5.begin(); it != arr5.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //reveese the array
    for (auto it = arr5.rbegin(); it != arr5.rend(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //another way to reverse the array
    for (auto it = arr5.end() - 1; it >= arr5.begin(); it--)
    {  
        cout<<*it<<" ";
    }
    cout<<endl;
    for(auto it : arr5){
        cout << it << " ";
    }
    cout<<endl;
    string str = "competetive";
    for(auto line : str){
        cout<< line << " ";//c o m p e t e t i v e
    }
    // this will print the same
    cout<<endl;
    for (auto it  = str.begin(); it != str.end(); it++)
    {
        cout<<*it<<" ";//c o m p e t e t i v e
    }
    cout<<endl;
    //size
    cout<<arr5.size()<<endl;;

    //front
    cout<<arr5.front()<<endl;;

    //back
    cout<<arr5.back()<<endl;
}