#include<bits/stdc++.h>
using namespace std;
//find the count of occurance;
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
    int up = upper_bound(arr , arr + n , target) - arr;
    int lb = lower_bound(arr , arr + n , target) - arr;
    int answer = up - lb;
    if(answer >= 0 && answer < n){
        //make sure ur index will bein ur range;
        cout<<answer<<" time target is present "<<endl;
    }else{
        cout<<target<<" "<<"is not present "<<endl;
    }
}