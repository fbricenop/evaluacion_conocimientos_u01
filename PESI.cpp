//determinar si dos numeros son PESI
#include <iostream>
using namespace std;
int comprobacion(int x,int y);
int main(){
	int n1,n2;
	cin>>n1>>n2;
	if(n1>n2){
		comprobacion(n1,n2);	
	}else if(n2>n1){
		comprobacion(n1,n2);
	}
	if(comprobacion(n1,n2)==1){
		cout<<"SON PESI.";
	}else{
		cout<<"NO SON PESI.";	
	}

	return 0;
}
int comprobacion(int x,int y){
	int c=0;
	for(int i=1; i<=x;i++){
		if(x%i==0 and y%i==0){
			c++;
		}
	}
	return c;
}
