#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(m>n||m==n){
            cout<<n<<endl;
        }else if((n>m)&&(m!=0)){
            cout<<(n-m)+(n)<<endl;
        
        }else{
            cout<<(n*2)<<endl;
        }}
	// your code goes here
	return 0;
}
