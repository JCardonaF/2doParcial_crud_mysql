// Julio Cesar Cardona Fuentes - 5990-21-11007 // Programacion 1 - 2do Parcial //
//#include <mysql.h>
#include <iostream>
#include "Cliente.h"
//int q_estado;
using namespace std;


int main()
{
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	cout << "Ingrese NIT:";
	getline(cin, nit);
	cout << "Ingrese NOMBRES:";
	getline(cin, nombres);
	cout << "Ingrese APELLIDOS:";
	getline(cin, apellidos);
	cout << "Ingrese DIRECCION:";
	getline(cin, direccion);
	cout << "Ingrese TELEFONO:";
	cin >> telefono;
	cin.ignore();
	cout << "Ingrese FECHA NACIMIENTO:";
	cin >> fecha_nacimiento;
	
	Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);
	c.crear();
	c.leer();
	system("pause");
	return 0;
}

//----------------------------------------------------------------------------------

	//MYSQL* conectar;
	//MYSQL_ROW fila;
	//MYSQL_RES* resultado;
	//conectar = mysql_init(0);
	//conectar = mysql_real_connect(conectar, "localhost", "usr_empresa", "Julio2022*", "db_empresa", 3306, NULL, 0);
	//if (conectar) {
		//cout << "Conexion Exitosa..." << endl;
		/*string puesto;
		cout << " Ingrese Puesto: ";
		cin >> puesto;
		string insert = "INSERT INTO puestos(puesto) values ('" + puesto + "');";
		const char* i = insert.c_str();
		q_estado = mysql_query(conectar, i);
		if (!q_estado) {
			cout << "INGRESO Exitoso..." << endl;
		}
		else {
			cout << " ERROR al Ingresar la informacion......" << endl;
		}*/

		/*string consulta = "SELECT * FROM puestos;";
		const char* c = consulta.c_str();
		q_estado = mysql_query(conectar, c);
		if (!q_estado) {
			resultado = mysql_store_result(conectar);
			while (fila = mysql_fetch_row(resultado)) {
				cout << fila[0] << ", " << fila[1] << endl;
			}
		}
		else {
			cout << "--- ERROR AL INGRESAR LA INFORMACION ---" << endl;
	}*/
	/*else {
		cout << "Error en la Conexion..." << endl;
	}*/
	//Cliente c = Cliente();
	//c.leer();

