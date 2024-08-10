#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int n,x;
	cin>>n>>x;
	set<int> v;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.insert(t);
    }
    if(v.find(x)==v.end()){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
}
