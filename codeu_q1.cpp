#include <iostream>
#include <vector>
#include <string>
#include <map>
//Assignment 1 - Getting Started
using namespace std;
int main (){
	string s1, s2; cin >> s1 >> s2;
	map <char,int> m;
	int flag = 0;
	for(int i = 0; i < s1.size(); i++) 
		m[s1[i]]++;
	for (int i = 0; i < s2.size(); i++)
			m[s2[i]]++;
	for(int i = 0; i < s1.size(); i++) {
		if (m[s1[i]] != 2){
			flag = 1;
			break;
		}
	}
	if (flag != 1){
		for(int i = 0; i < s2.size(); i++) {
			if (m[s2[i]] != 2){
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
		cout << "no";
	else 
		cout << "yes";
	return 0;
}