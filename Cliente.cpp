#pragma once
#include "Persona.h"
#include <iostream>
using namespace std;

class Cliente : Persona
{
	// Atributos
private: string nit;
	   // Constructor
public:
	Cliente() {
	}
	Cliente(string nom, string ape, string dir, int tel, string fn, string n) : Persona(nom, ape, dir, tel, fn) {
		nit = n;
	}

	// Metodos
	// set (modificar)
	void setNit(string n) { nit = n; }
	void setNombres(string nom) { nombres = nom; }
	void setApellidos(string ape) { apellidos = ape; }
	void setDireccion(string dir) { direccion = dir; }
	void setTelefono(int tel) { telefono = tel; }

	// get (mostrar)
	string getNit() { return nit; }
	string getNombres() { return nombres; }
	string getApellidos() { return apellidos; }
	string getDireccion() { return direccion; }
	int getTelefono() { return telefono; }

	// Metodo
	void mostrar() {
		cout << "__________" << endl;
		cout << nit << " , " << nombres << " , " << apellidos << " , " << direccion << " , " << telefono << endl;
	}
};