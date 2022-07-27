#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
    cin>>s;
    unordered_map<char,int> m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    for(auto x:m){
        if(x.second>1){
            cout<<x.first<<" "<<x.second<<endl;
        }
    }
	return 0;
}
