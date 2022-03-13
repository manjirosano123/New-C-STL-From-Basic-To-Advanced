#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"ordered map below "<<endl;
    //MAPS ONLY STORES UNIQUE KEYS
    //map stores everything in sorted order
    //sorted acoording to keys
    //in ascii value sorted
    map<string , int>mpp;
    cout<<"acoording to ascii "<<endl;
    mpp["c++"] = 10;
    mpp["java"] = 20;
    mpp["javascript"] = 20;//this is ok to have same value
    mpp["c#"] = 30;
    mpp["python"] = 40;
    mpp["java"] = 50;//over writing 
    for(auto i : mpp){
        cout<<i.first<<" "<<i.second<<endl;;
    }// this how u can print the map in a pair;
    pair<int , int >pr;// this how you write pair value
    pr.first = 1;
    pr.second = 10;
    //and u can write it in another way as well
    //sorted according to keys
    //in ascending value sorted
    cout<<"acoording to ascending "<<endl;
    map<int , string>mpp2;
    mpp2[10] = "c++";
    mpp2[20] = "c#";
    mpp2[30] = "java";
    mpp2[40] = "pyhton";
    mpp2[70] = "java";//this is ok to have same value
    mpp2[10] = "c";//over writing
    for(auto i : mpp2){
        cout<<i.first<<" "<<i.second<<endl;;
    }
    mpp.insert({"ruby" , 60});//thats how you insert;
    mpp2.emplace(60, "ruby");//another way to insert;
    cout<<"after inserting mpp"<<endl;
    for(auto i : mpp){
        cout<<i.first<<" "<<i.second<<endl;;
    }
    cout<<"after inserting mpp2"<<endl;
    for(auto i : mpp2){
        cout<<i.first<<" "<<i.second<<endl;;
    }
    mpp2.erase(10);//just give the key name
    cout<<"size after erasing mpp2 "<<mpp2.size()<<endl;
    mpp2.erase(mpp2.begin());
    map<int , string >::iterator it = mpp2.begin();
    map<int , string >::iterator it2 = mpp2.begin();
    for (auto i = 1; i <= 2; i++)
    {
        it2++;
    }
    mpp2.erase(it , it2);
    for(auto i : mpp2){
        cout<<i.first<<" "<<i.second<<endl;;
    }//{60 , "ruby"};
    mpp2.clear();//deletes the entire map;
    mpp2.erase(mpp2.begin() , mpp2.end());//deletes entire map as well
    // points to where raj lies mpp.find();
    auto it3 = mpp.find("java");//first occurance of java; iterator;
    cout<<"map is empty or not "<<mpp.empty()<<endl;//boolean value
    mpp.count("python");//will always return one coz map includes unique elements
    //everything is map is log of n
    //TC of map is log n
    cout<<"unordered map below "<<endl;
    unordered_map<int , int >mpp3;
    //unordered_map<pair<int , int>, int >mpp3;// this is not possible;
    //follow as same as map function;
    //unsorted;
    //O(1) in almost alll cases 
    //O(n) in the worst case, where n is the container size
    cout<<"pair class below "<<endl;
    pair<int , int >pr2 = {1 , 2};
    pair<pair<int , int> ,int> pr3 = {{1 , 2} , 2};// this is how u can write nested pair
    cout<<pr3.first.second<<endl;//this is how to return the value;
    pair<pair<int , int>,pair<int , int>> pr4 = {{1 , 2} , {2 , 4}};
    cout<<pr4.second.second<<endl;//this is how to return the value;
    //we can store vector of pair as well as  set 
    vector<pair<int , int>>vec;
    set<pair<int , int>>st;
    map<pair<int , int>, int >mp;
    cout<<"multi map below "<<endl;
    //multimap is sorted;
    //below output is according to ascii value;
    //multimap can store duplicate keys;
    multimap<string , int> mlmp;
    mlmp.emplace("harsh" , 2);
    mlmp.emplace("harsh" , 10);
    mlmp.emplace("harsh" , 6);
    mlmp.emplace("harsh" , 4);
    mlmp.emplace("harsh" , 8);
    for(auto i : mlmp){
        cout<<i.first<<" "<<i.second<<endl;;
    }
    //fuctions will be the same;
    //map is sorted , unordered map is random unsorted , multi map is sorted;
}