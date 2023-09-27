#include<bits/stdc++.h>
using namespace std;
int main (){
	int arr[5]={2,3,1,5};
	int sum =0;
	int total_sum = (5*6)/2;
	for (int i=0; i<5; i++){
		sum = sum+arr[i];
	}
	int newsum = total_sum-sum;
	cout<<"Missing Sum "<< newsum;
	return 0;
}
