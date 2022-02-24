

#include<iostream>
#include<conio.h>

using namespace std;



int main() {
	
	int clave, z ;
	float  oper1 = 0, oper2 = 0, ingresos = 0, egresos = 0, c=0;
	
	
	do{ 
	
	cout<<"ALEXANDER SANCHEZ"<< endl;
	cout<<"BIENVENIDO AL SISTEMA"<< endl;
	cout << "ingrese un numero" << endl;
	cin >> oper1;
	cout << "ingrese un numero" << endl;
	cin >> oper2;
	cout << "Ingrese la operacion que desea realizar"<< endl;
	cout <<"1. suma "<<endl;
	cout <<"2. resta "<<endl;
	cout <<"3. multiplicacion "<<endl;
	cout <<"4. divicion "<<endl;
	cout <<"5. ingresos "<<endl;
	cout <<"6. egresos "<<endl;
	cin >> clave;
	
	switch (clave) {
	case 1:
		cout << "la suma es: " << oper1+oper2 << endl;
		break;
	case 2:
		cout << "la resta es: " << oper1-oper2 << endl;
		break;
	case 3:
		cout << "la multiplicacion es: " << oper1*oper2 << endl;
		break;
	case 4:
		cout << "la divicion es: " << oper1/oper2 << endl;
		break;
	case 5:
		cout << "los ingresos de la empresa son: " <<oper1 + oper2 <<endl;
	case 6:
		cout << "los egresos de la empresa son: " << oper1 - oper2 <<endl;
	
	default:
		cout << "syntax error" << endl;
    }
	cout <<"desea salir?\nsi -> 0\nno -> 7: " <<endl;
	cin >>z;
	if (z == 0){
		c = 7;
	}
	}while( c==0 )  ;
	
	
     return 0;
}

