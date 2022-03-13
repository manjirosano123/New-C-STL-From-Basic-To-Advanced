#include<bits/stdc++.h>
using namespace std;
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
    int index = lower_bound(arr , arr + n , target) - arr;
    if(index != n && target == arr[index]){
        //make sure ur index will bein ur range;
        cout<<index<<" is the index of target "<<endl;
    }else{
        cout<<target<<" "<<"is not present "<<endl;
    }
}