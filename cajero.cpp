//cajero automatico creado con c++
#include <iostream>
#define saldo 1000

using namespace std;

int main()
{
	int x,opc,c;
	float w;

	cout<<"\tIntroduzca su clave"<<endl;
	cin>>c;
	if (c==2020)
{
	cout<<"\tBienvenido a su cajero automatico"<<endl;
	cout<<"1. Ingresar dinero en  su cuenta"<<endl;
	cout<<"2. consulta de saldo"<<endl;
	cout<<"3. Retiro de efectivo"<<endl;
	cout<<"4. salir"<<endl;

	cin>>opc;

	switch (opc)
	    
{
	case 1:
	cout<<"1. Ingresar la cantidad que desea abonar a su cuenta:"<<endl;
	cin>>x;
	w=saldo+x;

	cout<<"Su cuenta total es:"<<w<<endl;
	break;

	case 2:
	cout<<"consulta de dinero"<<endl;
	w=saldo;

	cout<<"Su cuenta total es:"<<w<<endl;
	break;

	case 3:
	cout<<"Retiro de efectivo"<<endl;
	cout<<"Ingrese la cantidad que desea retirar"<<endl;
	cin>>x;
	w=saldo-x;

	cout<<"Su cuenta total es:"<<w<<endl;

	case 4:
	cout<<"salir"<<endl;
	cout<<"Presiona una tecla para salir"<<endl;
	break;



		system ("Pause");
		return 0;
		
}
}
}
