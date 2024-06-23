#include <iostream>
using namespace std;
int factorial(int a);
int sumatoria(int b);
int main(){
	int y;
	cin>>y;
	cout<<sumatoria(y);	
	return 0;
}
int sumatoria(int b){
	int s=0;
	for(int i=1;i<=b;i++){
		s+=(factorial(i)/2*i);
	}
	return s;
}
int factorial (int a){
	int s=1;
	for(int i; i<=a;i++){
		s=s*i;
	}
	return s;
}

