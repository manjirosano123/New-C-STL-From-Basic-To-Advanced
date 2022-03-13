#include<bits/stdc++.h>
using namespace std;
int main(){
    //algorithms;
    //sorting;
    //linearfashion array , vector;
    cout<<"sorting algo "<<endl;
    int arr[5] = {1 , 4 , 2 , 5 , 0};
    sort(arr , arr + 5);//sort array in increasing order;n log n
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";// {0 , 1 , 2 , 4 , 5};
    }
    cout<<endl;
    int arr2[5] = {1 , 4 , 1 , 5 , 0};
    sort(arr2 + 1 , arr2 + 4);//sorting from 1 to 3 index;
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr2[i]<<" ";// {1 , 1 , 4 , 5 , 0};1
    }
    cout<<endl;
    vector<int>vec;
    vec.push_back(6);
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);
    sort(vec.begin() , vec.end());//you have to writean iterators;[);
    for(auto i : vec){
        cout<<i<<" ";//{0 , 1 , 2 , 3 , 6};
    }
    cout<<endl;
    //vec2 -> { 1 , 6 , 2 , 7 , 4};
    //sort it so that only indexes from 1 to 3;
    //final vector { 1 , 2 , 6 , 7 , 4};
    vector<int>vec2;
    vec2.push_back(1);
    vec2.push_back(6);
    vec2.push_back(2);
    vec2.push_back(7);
    vec2.push_back(4);
    sort(vec2.begin() + 1 , vec2.end() - 1);
    for(auto i : vec2){
        cout<<i<<" ";//final vector { 1 , 2 , 6 , 7 , 4};
    }
    cout<<endl;
    cout<<"reverse algo"<<endl;
    //if i wanna reverse;
    //reverse(startIT , endIT);
    reverse(arr , arr + 5);
    reverse(arr + 1  , arr + 4);
    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" ";// {5 , 4 , 2 , 1 , 0};
    }
    cout<<endl;
    reverse(vec.begin() , vec.end());   
    for(auto i : vec){
        cout<<i<<" ";//{6 , 3 , 2 , 1 , 0};
    }
    cout<<endl;
    reverse(vec.begin() + 1 , vec.end() - 1); 
    for(auto i : vec){
        cout<<i<<" ";//{6 , 1 , 2 , 3 , 0};
    };
    cout<<endl;
    cout<<"maximum element"<<endl; 
    //if i wanna find the maximum element in any index range;
    //i to j give me the maximum;
    //same for vectors too
    int element = *max_element(arr , arr + 5);//this will give you element;
    //int element2 = max_element(arr , arr + 5);//this will give you iterator;
    cout<<element<<endl;//{5};
    int element3 = *min_element(arr , arr + 5);
    cout<<element3<<endl;//{0};
    cout<<"finding the sum of therange"<<endl;
    //same as vectors too;
    int sum = accumulate(arr , arr + 5 , 0);//initial sum is 0 as u can see;
    cout<<sum<<endl;//{12};
    int sum2 = accumulate(arr + 1 , arr + 4 , 0);
    //                                        ^ this is the initial sum as (0);
    cout<<sum2<<endl;//{7};
    cout<<"to count the no. of occurance"<<endl;
    //similar for vectors;
    int arr3[7] = {1 , 2 , 1 , 1 , 5 , 6 , 4};
    int cnt = count(arr3 , arr3 + 7 , 1);
    //                                ^ this is the element you have to count;
    cout<<cnt<<endl;//big O (n);{3};
    cout<<"finding the index of the number"<<endl;
    //same for vector too;
    int brr[7] = {1 , 2 , 5 , 1 , 2 , 4 , 4};
    //i want to find the first occurance of 2;
    auto it2 = find(brr , brr+7 , 2);//return pointer an iterator;
    //pointing to first instance of it , or else it;
    //returns pointing to the end() if it is not exist;
    int index = it2 - brr;//iterator - begin iterator;
    cout<<index<<" is index of the 2 "<<endl;
    vector<int>vctr = {1 , 5 , 6 , 2 , 3 , 5 , 2};
    //x = 4;
    auto it = find(vctr.begin() ,vctr.end() , 4);
    if(it == vctr.end()){
        cout<<"element is not present"<<endl;
    }
    else{
        cout<<"element is first presnet at: "<<it - vctr.begin();
    }//if element is not present then point towards vctr.end(); 
}
