#include<iostream>
#include<stdlib.h>
using namespace std;
  
class opciones {public: int a,b,c, edad,r,NM, NM1, RI, RF,z,w, numero, fact=1; void comparacion(); void control(); void tabla(); void factorial();};

void opciones::factorial(){
	
	cout<<"Digite el numero del que sea buscar el factorial\n"; cin>>numero;
	
	for(int i=1; i<=numero; i++){
		fact= fact*i;
	}
	
	cout<<"\nEl factorial de el numero es: "<<fact<<endl;

	
}

void opciones::tabla(){
	
	cout<<"Que número deseas multiplicar?\n"; cin>>NM;
	cout<<"Escribe nuevamemte la tabla a multiplicar por favor\n"; cin>>NM1;
	cout<<"Desde que rango estara comprendida la multiplicacion (Inicio)?\n";cin>>RI;
	cout<<"Desde que rango estara comprendida la multiplicacion (Final)\n";cin>>RF;
	
	if(NM>NM1){cout<<"Error"<<NM<<"es mayor que"<<NM1<<"Debe sere menor";}
	
	
	
	for(z=RI; z<=RF; z++){for(w=NM; w<=NM1; w++){r=z*w; cout<<z<<"*"<<w<<"="<<r<<"\n";}}
	
}

void opciones :: comparacion(){
	
	cout<<"Introduzca el primer valor\n"; cin>>a;
	cout<<"Introduzca el segundo valor\n"; cin>>b;
	cout<<"Introduzca el tercer valor\n"; cin>>c;
	
	if(a>b && a>c){if(b>c){cout<<"A = "<<a<<" es mayor" <<" B = " <<b<<" es medio" <<" C = " <<c<<" es menor";}
					else if(c>b){cout<<"A = "<<a<<" es mayor" <<" C = " <<c<<" es medio" <<" B = " <<b<<" es menor";}
					else {cout<<"A = "<<a<<" es mayor" <<" B = " <<b<<"y" <<" C = " <<c<<" son iguales";}
					}
				else if(b>a && b>c){if(a<c){cout<<"B = "<<b<<" es mayor" <<" A = " <<a<<" es medio" <<" C = " <<c<<" es menor";}
					else if(c>a){cout<<"B = "<<b<<" es mayor" <<" C = " <<c<<" es medio" <<" A = " <<a<<" es menor";}
					else {cout<<"B = "<<b<<" es mayor" <<" A = " <<a<<"y" <<" C = " <<c<<" son iguales";}	
				}
				
				else if(c>b && c>a){if(b>a){cout<<"C = " <<c<< " es mayor" << " B = " <<b<< " es medio" << " A = " <<a<< " es menor";}
				else if(a>b){cout<<"C = "<<c<< " es mayor" << " A = " <<a<< " es medio" << " B = " <<b<< " es menor";}
				else {cout<<"C = "<<c<< " es mayor" <<" A = " <<a<< "y" << " B = " <<b<< " son iguales";}
				
					}
				else{cout<<"A ="<<a<< " B = " <<b<< "y" <<" C = "<<c<<" son iguales";}
}

void opciones::control()
{
		cout<<"Ingrese la edad correspondiente\n"; cin>>edad;
	if(edad<=5)
	{
		cout<<"Usted tiene "<<edad<<" años, corresponde a Pre-Primario\n";
	}
	if((edad>=6)&&(edad<=11))
	{
		cout<<"Usted tiene "<<edad<<" años, corresponde a Basica\n";
	}
	if((edad>=12)&&(edad<=15))
	{
		cout<<"Usted tiene "<<edad<<" años, corresponde a Media\n";
	}
	if((edad>=15)&&(edad<=25))
	{
		cout<<"Usted tiene "<<edad<<" años, su edad es apta para ingresar a la universidad\n";
	}
	if(edad>26)
	{
		cout<<"Usted tiene "<<edad<<" años, su edad es para estar graduado\n";
	}

}
main()
{
	int opcion; opciones obj;
	int decision;
	int opcion2;
	sube:
	cout<<"\nMenu de Opciones\n1-Comparar Valores, Control Edades\n2-Tabla Numerica, Factorial de un Numero\n";
	cout<<"\nSeleccione una opcion\n";cin>>decision;
	
	//Aqui se realiza la decision para ver cual de las dos opciones del primer menu de opciones, querra el usuario!
	if(decision==1)
	{
		cout<<"\nMenu de Opciones\n1-Comparar valores\n2-Control de Edades\n";cin>>opcion;
	}
	else if(decision==2)
	{
		cout<<"\nMenu de Opciones\n1-Tabla Numerica\n2-Factorial de un Numero\n";cin>>opcion2;
	}
	else{cout<<"Opcion no valida, intente de nuevo\n";}
	
	
	if(opcion==1)
	{
		obj.comparacion();
	}
	else if(opcion==2)
	{
		
		obj.control();
	}
	
	

	if(opcion2==1)
	{
		obj.tabla();
		
	}
	
	else if(opcion2==2)
	{
		obj.factorial();
	}
	
	
	

	system("Pause");
	
	
}
