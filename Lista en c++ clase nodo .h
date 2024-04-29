pragma once
#include <iostream>
using namespace std;
class Nodo
{
public:
	string nombre;
	string habitat;
	string estadoConservacion;
	Nodo* siguiente;// puntero siguiente de tipo nodo
	Nodo(string n, string h, string estado);
		

};
