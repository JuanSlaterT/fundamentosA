//Programa que presenta las operaciones básicas
//Modificado por Juan Diego Arevalo Bernal 
//Fecha: 29-09-2022

#include<iostream>
using namespace std;

int main()
{
	float JDAB_x,JDAB_y,JDAB_s,JDAB_m,JDAB_d,JDAB_r;
	//Ingreso de datos
	cout<<"Ingrese en valor de JDAB_x=:";
	cin>>JDAB_x;
	cout<<"Ingrese en valor de JDAB_y=:";
	//Operaciones 
	cin>>JDAB_y;
	JDAB_s=JDAB_x+JDAB_y;
	JDAB_m=JDAB_x*JDAB_y;
	JDAB_d=JDAB_x/JDAB_y;
	JDAB_r=JDAB_x-JDAB_y;
	//Muestra los resutaldos.
	cout<<"Las suma de "<<JDAB_x<<" + "<<JDAB_y<<" = "<<JDAB_s<<endl;
	cout<<"Las multiplicacion de "<<JDAB_x<<" * "<<JDAB_y<<" = "<<JDAB_m<<endl;
	cout<<"Las division de "<<JDAB_x<<" / "<<JDAB_y<<" = "<<JDAB_d<<endl;
	cout<<"Las resta de "<<JDAB_x<<" - "<<JDAB_y<<" = "<<JDAB_r<<endl;
	return 0 ;

}

