#include<bits/stdc++.h>
using namespace std;
int main(){
    //binary search;
    //work on only sorted arrays;
    //arr[] -> {1 , 5 , 7 , 9 , 10};
    //true -> 9 exist in array;
    //false -> 8 does not exist in array;
    cout<<"binary search"<<endl;
    //works in log n TC;
    int arr[5] = {1 , 5 , 7 , 9 , 10};
    vector<int>vec = {1 , 5 , 7 , 9 , 10};
    bool res = binary_search(arr , arr+5 , 8);
    bool res2 = binary_search(vec.begin(), vec.end() , 9);
    cout<<res<<endl;
    cout<<res2<<endl;
    cout<<"lower bound"<<endl; 
    //only for sorted;
    //return the iterator pointing towards to first
    //element which is not less than x;
    auto it = lower_bound(arr , arr + 5 , 5);
    int idx = it - arr;
    cout<<idx<<endl;//1
    auto it2 = lower_bound(arr , arr + 5 , 12);
    int idx2 = it2 - arr;
    cout<<idx2<<endl;//5
    auto it3 = lower_bound(vec.begin() , vec.end() , 6);
    int idx3 = it3 - vec.begin();
    cout<<idx3<<endl;//2
    cout<<"upper bound"<<endl;
    //only for sorted;
    //return the iterator pointing towards to just greater than x;
    //{1 , 5 , 7 , 9 , 10};
    int index = upper_bound(arr , arr + 5 , 5) - arr;
    int index2 = upper_bound(arr , arr + 5 , 12) - arr;
    int index3 = upper_bound(vec.begin() , vec.end() , 5) - vec.begin();
    cout<<index<<endl;//2
    cout<<index2<<endl;//5
    cout<<index3<<endl;//2
}   