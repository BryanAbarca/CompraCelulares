#ifndef TIENDA_H
#define TIENDA_H
#include <iostream>
#include <sstream>
using namespace std;
class Tienda{
public:
	Tienda();
	Tienda(string Nombre,string Marca ,int MemoriaInterna, int Ram, int CamaraTrasera,int CamaraFrontal, string Color, int Cantidad, int Precio);
	~Tienda();
	void setNombre(string Nombre);
	void setMarca(string Marca);
	void setMemoriaInterna(int MemoriaInterna);
	void setRam(int Ram);
	void setCamaraTrasera(int CamaraTrasera);
	void setCamaraFrontal(int CamaraFrontal);
	void setColor(string Color);
	void setCantidad(int Cantidad);
	void setPrecio(int Precio);
	string getNombre();
	string getMarca();
	int getMemoriaInterna();
	int getRam();
	int getCamaraTrasera();
	int getCamaraFrontal();
	string getColor();
	int getCantidad();
	int getPrecio();
	void setCompra();
	string toString();
	
	
	
	
private:
     string Marca;
	 int MemoriaInterna;
     int Ram;
     int CamaraTrasera;
     int CamaraFrontal;
	 string Color;
     int Cantidad;
     int Precio;
	 string Nombre;
};

#endif

