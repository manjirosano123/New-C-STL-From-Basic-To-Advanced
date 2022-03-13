#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>vec;
	cout<<vec.size()<<endl;
	vec.push_back(3);
	vec.push_back(2);
	cout<<vec.size()<<endl;
	cout<<vec.capacity()<<endl;
	vec.emplace_back(1);//another way to push values and faster too
	cout<<vec.capacity()<<endl;
	vec.pop_back();//{3 2};
	for(auto i : vec){
		cout<<i<<" ";
	}
	cout<<endl;
	for (int i = 0; i < vec.size(); i++){
		cout<<vec.at(i)<<" ";
	}
	cout<<endl;
	vec.clear();//erase all the elements but capcity do not change
	cout<<vec.capacity()<<endl;
	vector<int>vec1(4 , 0);//{0 , 0 , 0 , 0};
	vector<int>vec2(4 , 10);//{10 , 10 , 10 , 10}
	vector<int>vec3(vec2);//copy entire vector to current one
	vector<int>vec4(vec2.begin() , vec2.begin() + 2);//{10 , 10 }
	for(auto it : vec4){
		cout<<it<<" ";
	}
	cout<<endl;
	//to define 2d vectors;
	vector<int>harsh;
	harsh.push_back(1);
	harsh.push_back(2);

	vector<int>harsh1;
	harsh1.push_back(10);
	harsh1.push_back(20);

	vector<int>harsh2;
	harsh2.push_back(100);
	harsh2.push_back(200);
	harsh2.push_back(300);

	vector<vector<int>>vec5;
	vec5.push_back(harsh);
	vec5.push_back(harsh1);
	vec5.push_back(harsh2);

	for(auto it1 : vec5){
		for(auto it2 : it1 ){
			cout<<it2<<" ";
		}
		cout<<endl;
	}
	for (int i = 0; i < vec5.size(); i++){
		for (int j = 0; j < vec5[i].size(); j++){
			cout<<vec5[i][j]<<" ";
		}
		cout<<endl;
	}
	//2D vector
	vector<vector<int>>vec2d(10 , vector<int>(20 , 0));
	vec2d.push_back(vector<int>(20 ,0));
	cout<<vec2d.size()<<endl;
	vec2d[2].push_back(1);

	vector<int> arr[4];
	arr[1].push_back(0);

	//3D vector

	vector<vector<vector<int>>>vec3d(10 ,vector<vector<int>>(20 ,vector<int>(30 , 0)));
	vec3d[2][1].push_back(3);
}