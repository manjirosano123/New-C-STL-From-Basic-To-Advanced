#include<bits/stdc++.h>
using namespace std;
//Comparators TC is n log n ;
bool check(int el1 , int el2){
    if(el1 == el2){
        return true;
    }
    if(el1 > el2){
        return true;
    }
    return false;
}
bool comp(pair<int , int > el1 , pair<int , int > el2){
    if(el1.first < el2.first){
        return true;
    }
    if(el1.first == el2.first){
        if(el1.second > el2.second){
            return true;
        }

    }
    return false;
}
int main(){
    pair<int , int >arr[] ={{1 , 2} , { 4 , 5} , { 1 , 3 } , { 3 , 4} ,{ 3 , 2} ,{ 3 , 9}};
    sort(arr , arr + 6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    cout<<endl;
    cout<<"after using comparators "<<endl;
    sort(arr , arr + 6 , comp);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    int arr2[] = { 1 , 6 , 2 , 5 , 5 , 0 };
    sort(arr2 , arr2 + 6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"after using check comparator "<<endl;
    sort(arr2 , arr2 + 6 , check);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    //greater function makes everyonr in descending order;
    sort(arr2 , arr2 + 6 ,greater<int>());
    cout<<"after greater comparator "<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    cout<<"after greater comparator on pair "<<endl;
    sort(arr , arr + 6 , greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    cout<<endl;
}