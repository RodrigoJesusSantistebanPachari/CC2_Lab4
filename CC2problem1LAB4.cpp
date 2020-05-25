#include<iostream>
using namespace std;

class Curso{
	
	private:
		string nombre;
		string codigo;
		int nroAlumnos;
		
	public:
		Curso(){
			nombre = "o";
			codigo = "o";
			nroAlumnos = 0;
		}
		
		Curso(const string nombre, const string codigo,  const int nroAlumnos){
			this-> nombre = nombre;
			this-> codigo = codigo;
			this-> nroAlumnos = nroAlumnos;
		}
		
		string getNombre() const{
			return nombre;
		}
		
		string getCodigo() const{
			return codigo;
		}
		
		int getnroAlumnos() const{
			return nroAlumnos;
		}
		
		void setNombre(const string nombre){
			this-> nombre = nombre;
		}
		
		void setCodigo(const string codigo){
			this->codigo  = codigo;
		}
		
		void setnroAlumnos(const int nroAlumnos){
			this->nroAlumnos  = nroAlumnos;
		}
};

int main(){
	
	//Se instancia la Clase Curso
	//Podemos modificar o establecer los valores de nuesto objeto mediante los setters
	//Mostramos los valores de nuestro objeto mediante los getters
	
	return 0;
}
