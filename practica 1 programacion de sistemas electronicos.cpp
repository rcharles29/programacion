//practica 1 programacion de sistemas electronicos 
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	
	float b,h,r,areat=0,arear=0,vc=0,vcl=0;
	
	cout<<"Ingrese el valor del base: ";cin>>b;
	cout<<"ingrese el valor de la altura: ";cin>>h;
	cout<< "ingrese el valor del radio: ";cin>>r;
	
	areat= 0.4330*(pow(b,2));
	arear= b*h;
	vc= (3.1416*(pow(r,2))*h)/3;
	vcl = 3.1416*(pow(r,2))*h;
	
	cout<<"\nResultados:"<<endl;
    cout<<"\nEl area de su triangulo equilatero es: "<<areat<<endl;
	cout<<"El area de su rectangulo es: "<<arear<<endl;
	cout<<"El volumen de su cono es: "<<vc<<endl;
	cout<<"El volumen de su cilindro es: "<<vcl<<endl;
	
	
		return 0;
}
