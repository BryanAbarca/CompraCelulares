#include "Tienda.h"

Tienda::Tienda() {
	Nombre="";
	Marca="";
	MemoriaInterna=0;
	Ram=0;
	CamaraTrasera=0;
	CamaraFrontal=0;
	Color="";
	Cantidad=0;
	Precio=0;
}
Tienda::Tienda(string Nombre,string Marca ,int MemoriaInterna, int Ram, int CamaraTrasera,int CamaraFrontal, string Color, int Cantidad, int Precio){
	this->Nombre=Nombre;
	this->Marca=Marca;
	this->MemoriaInterna=MemoriaInterna;
	this->Ram=Ram;
	this->CamaraTrasera=CamaraTrasera;
	this->CamaraFrontal=CamaraFrontal;
	this->Color=Color;
	this->Cantidad=Cantidad;
	this->Precio=Precio;
}

Tienda::~Tienda(){
	
}
	
void Tienda::setNombre(string Nombre){
	this->Nombre=Nombre;
}
void Tienda::setMarca(string Marca){
	this->Marca=Marca;
}
void Tienda::setMemoriaInterna(int MemoriaInterna){
	this->MemoriaInterna=MemoriaInterna;
}
void Tienda::setRam(int Ram){
	this->Ram=Ram;
}
void Tienda::setCamaraTrasera(int CamaraTrasera){
	this->CamaraTrasera=CamaraTrasera;
}
void Tienda::setCamaraFrontal(int CamaraFrontal){
	this->CamaraFrontal=CamaraFrontal;
}
void Tienda::setColor(string Color){
	this->Color=Color;
}
void Tienda::setCantidad(int Cantidad){
	this->Cantidad=Cantidad;
}
void Tienda::setPrecio(int Precio){
	this-> Precio=Precio;
}
string Tienda::getNombre(){
	return Nombre;
}
string Tienda::getMarca(){
	return Marca;
}
int Tienda::getMemoriaInterna(){
	return MemoriaInterna;
}
int Tienda::getRam(){
	return Ram;
}
int Tienda::getCamaraTrasera(){
	return CamaraTrasera;
}
int Tienda::getCamaraFrontal(){
	return CamaraFrontal;
}
string Tienda::getColor(){
	return Color;
}
int Tienda::getCantidad(){
	return Cantidad;
}
int Tienda::getPrecio(){
	return Precio;
}
void Tienda::setCompra(){
	cout<<"Usted ha seleccionado el: "<<Nombre<<endl;
	cout<<"Color: "<<Color<<endl;
	cout<<"contamos con: "<<Cantidad-1<<endl;
	cout<<"Precio Base: "<<Precio<<" colones"<<endl;
	cout<<"Valor de IVA: "<<Precio*0.13<<endl;
	cout<<"Usted ha cancelado: "<<Precio+Precio*0.13<<" colones"<<endl;
	cout<<"GRACIAS POR SU COMPRA!"<<endl;
	
	
}

string Tienda::toString(){
	stringstream x;
    x<<"Nombre: "<<Nombre<<endl;
	x<<"Marca: "<<Marca<<endl;
	x<<"Memoria interna: "<<MemoriaInterna<<" GB"<<endl;
	x<<"Ram: "<<Ram<<" GB"<<endl;
	x<<"Camara Trasera: "<<CamaraTrasera<<" megapixeles"<<endl;
	x<<"Camara Frontal: "<<CamaraFrontal<<" megapixeles"<<endl;
	x<<"Color: "<<Color<<endl;
	x<<"Cantidad: "<<Cantidad<<endl;
	x<<"Precio Original: "<<Precio<<" Colones"<<endl;
	
	
	
return x.str();
}
