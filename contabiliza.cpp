#include<iostream>
using namespace std;

int main()
{
	int JDAB_i=0,JDAB_l;
	float JDAB_x,JDAB_s=0;
	cout<<"ingrese el limite JDAB_l="; cin>>JDAB_l;
	do{
		
	cout<<"ingrese el numero JDAB_x="; cin>>JDAB_x;
	JDAB_i=JDAB_i+1;
	JDAB_s=JDAB_s+JDAB_x;



	}while(JDAB_i<JDAB_l);
	cout<<"Se ingresaron "<<JDAB_l<<" numeros "<< "que sumaron "<<JDAB_s<<endl;
	return 0;



}
