#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin>>N;
    
    while(N>0){
        int n,s;
        
        cin>>n>>s;
        if(n>=s){
            cout<<s<<endl;
        }else{
            cout<<2*n-s<<endl;
        }
        N--;
    }
}
