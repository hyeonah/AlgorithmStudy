#include<iostream>

using namespace std;

int arr[12];
int sum(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(n==3) return 4;
	if(arr[n]!=0) return arr[n];
	return arr[n] = sum(n-1) + sum(n-2)+sum(n-3);
}

int main(){
int num,n;
cin >> num;

for(int i=1; i<=num; i++){
	cin >> n;
	cout<< sum(n) << endl;
}
return 0;
}
