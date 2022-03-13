#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"ordered set below "<<endl;
    //output comes out to be sorted form;
    //given n elements tell me the unique elements
    int arr[5] ={1 , 2 , 1 , 2 , 3};//{1 , 2 , 3};
    set<int>st;
    //int n;
    //cin >> n;
    //int x;
    //for (int i = 0; i < n; i++){
    //    cin >> x;
    //    st.insert(x);
    //}
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(2);
    st.insert(3);
    for(auto it : st){
        cout<<it<<" ";//st = { 1 , 2 , 3}
    }
    cout<<endl;
    //erase function // log n;
    st.erase(st.begin());// { 2 , 3 }
    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;
    //using iterator define ranges;
    set<int>::iterator it = st.begin();
    set<int>::iterator it2 = st.begin();
    it2++;
    //st.erase(st.begin() ,st.begin() + 2); as well
    st.erase(it , it2);
    for(auto it : st){
        cout<<it<<" ";//st = {3}
    }
    cout<<endl;
    //another way to earse;
    set<int>st2;
    st2.insert(2);
    st2.insert(4);
    st2.insert(6);
    st2.emplace(8);//faster than insert and equivalent to insert
    st2.erase(4);//st.erase(key);
    for(auto it : st2){
        cout<<it<<" ";// {2 , 6 , 8}
    }
    cout<<endl;
    set<int>st3 = {1 , 7 , 5 , 8};
    //return the iterator which points to 7// log n
    auto it3 = st3.find(7);
    //if the elemets doesnt exist it point towards st3.end();
    auto it4 = st3.find(9);// it = st.end();
    cout<<st3.size()<<endl;
    //first way kind of lengthy
    for (auto i = st3.begin(); i != st3.end(); i++){
        cout<<*i<<" ";//{1 , 5 , 7 , 8}
    }
    cout<<endl;
    //second way kind of fast
    for(auto i : st3){
        cout<<i<<" ";//{1 , 5 , 7 , 8}
    }
    cout<<endl;
    //set<node>st4; node can store in set;
    //deleting entire set
    st3.erase(st3.begin(), st3.end());
    cout<<st3.size()<<endl;
    cout<<"unordered set below "<<endl;
    //output will be random elements coz its unordered set
    unordered_set<int>unst;
    unst.insert(1);
    unst.insert(2);
    unst.insert(3);
    unst.insert(4);
    for(auto it: unst){
        cout<<it<<" ";
    }
    cout<<endl;
    //operations will be same;
    //avrage time complexity is O(1);
    //but the worst case is linear in nature, O(set size);
    //if question do not required to sorted form alwasy use unoredered set for sure
    //becoz its faster than set;
    //if u get TLE in question switch to set;
    cout<<"multi set below "<<endl;
    //multiset give you the option store all the elements not unique
    //in a sorted way
    //stores duplicates also
    multiset<int>ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(3);
    ms.insert(2);
    ms.insert(2);//ms.emplace(2);
    for(auto it : ms){
        cout<<it<<" ";//{1 , 1 , 2 , 2 , 3}
    }
    cout<<endl;
    ms.erase(2);//all the instances will be erased
    auto it5 = ms.find(3); // returns the iterator pointing to the first elements of 2
    ms.erase(ms.begin(),ms.end());//deletes the entire set
    ms.clear();//deletes the entire set as well
    cout<<"size of the set = "<<ms.size()<<endl;
    //counts how many time occurs 2;
    ms.count(2);
    //function are same as set;
    //log n in size;
    //you can give iterator;
    ms.erase(ms.find(2));//erase one instances;
    multiset<int>::iterator IT = ms.find(2);
    multiset<int>::iterator IT2 = ms.find(2);
    IT2++;
    IT2++;
    ms.erase(IT,IT2);//erase two instances of 2;
} 