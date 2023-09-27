#include<bits/stdc++.h>
using namespace std;
int main(){
	signed int n;
	cout<<"Enter the number "<<endl;
	cin>>n;
	while(n!=1){
		if(n%2==0){
			n=n/2;
			cout<<n<<" ";
		}
		else{
			n=(n*3)+1;
			cout<<n<<" ";
		}
	}
	
	return 0;
}
