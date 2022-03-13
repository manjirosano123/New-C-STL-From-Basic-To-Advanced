#include<bits/stdc++.h>
using namespace std;
//find the last occurance of x;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target ;
    cin >> target;
    int index = upper_bound(arr , arr + n , target) - arr;
    int answer = index - 1;
    if(target == arr[answer] && answer >= 0){
        //make sure ur index will bein ur range;
        cout<<answer<<" is the index of target "<<endl;
    }else{
        cout<<target<<" "<<"is not present "<<endl;
    }
}