//determinar si dos numeros son PESI
#include <iostream>
using namespace std;
int main(){
	int n1,n2,c=0;
	cin>>n1>>n2;
	if(n1>n2){
		for(int i=1;i<=n2;i++){
			if(n1%i==0 and n2%i==0){
				c++;
			}
		}	
	}else if(n2>n1){
		for(int i=1;i<=n1;i++){
			if(n1%i==0 and n2%i==0){
				c++;
			}
		}
	}
	if(c==1){
		cout<<"SON PESI";
	}else{
		cout<<"NO SON PESI";	
	}

	return 0;
}
