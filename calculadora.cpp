//calculadora
#include <iostream>
using namespace std;
int main(){
	float n1,n2;
	int op=0;

	do{
		cout<<"ESCRIBA EL NUMERO DE LA OPERACION A REALIZAR: "<<endl<<"0)SALIR \n1)SUMA \n2)RESTA \n3)MULTIPLICACION \n4)DIVISION"<<endl;
		cin>>op;
		switch(op){
			case 1:{
				cout<<"INGRESE LOS DOS NUMEROS: "<<endl;
				cin>>n1>>n2;
				cout<<"LA SUMA DE LOS DOS NUMEROS ES: "<<endl<<n1+n2<<endl;
				break;
			}
			case 2:{
				cout<<"INGRESE LOS DOS NUMEROS: "<<endl;
				cin>>n1>>n2;
				cout<<"LA RESTA DE LOS DOS NUMEROS ES: "<<endl<<n1-n2<<endl;
				break;
			}
			case 3:{
				cout<<"INGRESE LOS DOS NUMEROS: "<<endl;
				cin>>n1>>n2;
				cout<<"LA MULTIPLICACION DE LOS DOS NUMEROS ES: "<<endl<<n1*n2<<endl;
				break;
			}
			case 4:{
				cout<<"INGRESE LOS DOS NUMEROS: "<<endl;
				cin>>n1>>n2;
				if(n1>=0 and n2>0){
					cout<<"LA DIVISION DE LOS DOS NUMEROS ES: "<<endl<<n1/n2<<endl;
				}else if(n2==0){
					cout<<"DIVISION ENTRE CERO NO ES POSIBLE"<<endl;
				}
				
				break;
			}
		}


	}while(op!=0);

	return 0;
}
