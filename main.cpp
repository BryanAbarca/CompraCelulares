#include<iostream>
#include "Tienda.h"
using namespace std;

int main () {
	int opc;
	string Nombre,Marca,Color;
	int MemoriaInterna,Ram,CamaraTrasera,CamaraFrontal,Cantidad,Precio;
	Tienda iphone11("Iphone 11","Apple",64 ,4 ,12 ,7 ,"Verde",3 ,520000);
	Tienda GalaxyFOLD("Galaxy FOLD","Samsung",512, 12, 16, 10,"Negro",2,1150000);
	Tienda S20Ultra("S20 Ultra","Samsung", 128,8,108,10,"Negro",5,800000);
	Tienda A70;
	Tienda P30Pro("P30 Pro","HUAWEY",256,4,40,32,"Azul",6,420000);
	Tienda NOVA5T("NOVA 5T","HUAWEY",128,8,48,32,"Morado",8,225000);
	cout<<"Bienvenido a tienda de celulares Pura Vida"<<endl;
	cout<<""<<endl;
	cout<<"A continuacion se le mostrara la variedad de celulares con los que cuenta nuestra tienda"<<endl;
	cout<<"Digite 1 para continuar"<<endl;
	cin>>opc;
	do{
	system("cls");
	
	if(opc==1){
	int num;
	cout<<"Escoja un telefono para ver sus caracteristicas"<<endl;
	cout<<"Digite 1 para Iphone11"<<endl;
	cout<<"Digite 2 para Galaxy FOLD"<<endl;
	cout<<"Digite 3 para S20 Ultra "<<endl;
	cout<<"Digite 4 para A70"<<endl;
	cout<<"Digite 5 para P30 Pro"<<endl;
	cout<<"Digite 6 para NOVA 5T"<<endl;
	cin>>num;

	   if(num==1){
		   cout<<iphone11.toString();
	   }else if(num==2){
			   cout<<GalaxyFOLD.toString();
	   }else if(num==3){
		   cout<<S20Ultra.toString();
	   }else if(num==4){
		   cout<<"Digite el Nombre"<<endl;
		   cin>>Nombre;
		   A70.setNombre(Nombre);
		   cout<<"Digite la Marca"<<endl;
		   cin>>Marca;
		   A70.setMarca(Marca);
		   cout<<"Digite la Capacidad de Memoria interna"<<endl;
		   cin>>MemoriaInterna;
		   A70.setMemoriaInterna(MemoriaInterna);
		   cout<<"Digite la memoria Ram"<<endl;
		   cin>>Ram;
		   A70.setRam(Ram);
		   cout<<"Digite la Camara trasera"<<endl;
		   cin>>CamaraTrasera;
		   A70.setCamaraTrasera(CamaraTrasera);
		   cout<<"Digite la Camara Frontal"<<endl;
		   cin>>CamaraFrontal;
		   A70.setCamaraFrontal(CamaraFrontal);
		   cout<<"Digite el color"<<endl;
		   cin>>Color;
		   A70.setColor(Color);
		   cout<<"Digite la cantidad"<<endl;
		   cin>>Cantidad;
		   A70.setCantidad(Cantidad);
		   cout<<"Ingrese el precio"<<endl;
		   cin>>Precio;
		   A70.setPrecio(Precio);
		   cout<<A70.toString();
		   
		   
	   }else if(num==5){
		   cout<<P30Pro.toString();
	   }else if(num==6){
		   cout<<NOVA5T.toString();
	   }else
			cout<<"No digito un numero correspondiente a algun Celular"<<endl;

	cout<<""<<endl;
	cout<<"Le gustaria realizar la compra de algun dispositivo 1-Si 0-NO?"<<endl;
	cin>>opc;
	
	if(opc==1){
		cout<<"Digite el numero del celular que le gustaria adquirir"<<endl;
		cin>>num;
		cout<<""<<endl;
		if(num==1){
			iphone11.setCompra();
		}else if(num==2)
			GalaxyFOLD.setCompra();
		else if(num==3)
			S20Ultra.setCompra();
		else if(num==4)
			A70.setCompra();
	    else if(num==5)
			P30Pro.setCompra();
		else if(num==6)
			NOVA5T.setCompra();
		}else{
		cout<<""<<endl;
	}
	
	}else{
	cout<<"Gracias por su visita"<<endl;
	}
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<""<<endl;
	cout<<"Desea realizar otra compra? 1-si o 0-no"<<endl;
	cin>>opc;
}while(opc==1);
	
	return 0;
	}

