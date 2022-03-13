#include<bits/stdc++.h>
using namespace std;
int main(){
    //string s = "abc";
    //Number of arrangements is meant to be permutations;
    //we can do it on vector , array etc;
    // abc;
    // acb;
    // bac;
    // bca;
    // cab;
    // cba; 
    string s = "abc";
    bool res = next_permutation(s.begin() , s.end());// O (n);
    cout<<res<<endl;
    string st = "cba";
    bool res2 = next_permutation(st.begin() , st.end());
    cout<<res2<<endl;
    sort(st.begin(),st.end());
    do
    {
        cout<<st<<endl;
    } while (next_permutation(st.begin() , st.end()));// this for competetive programming;
    //use recurssive way fro interview;
    int arr[] = {1 , 10 , 5};
    int n = 3;
    sort(arr , arr + n);// this will make array as {1 , 5 , 10}
    do
    {
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout << endl;
        
    } while (next_permutation(arr , arr + n));
    //pre permutations;
    string st2 = "acb";
    prev_permutation(st2.begin() , st2.end());//prints the previous permutations;
    cout<<st2<<endl;//"abc";
}