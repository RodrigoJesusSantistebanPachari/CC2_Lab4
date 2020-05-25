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

class ArregloDeCursos{
	
	private:
		Curso *Cursos;
		int tamanio;
		
	public:
		
		ArregloDeCursos(const Curso *_Cursos, const int &tamanio){
			Cursos = new Curso[tamanio];
			this-> tamanio = tamanio;
			for (int i = 0; i < tamanio; i++){
        		Cursos[i]= _Cursos[i];
  		  	}	 
		}
		
		ArregloDeCursos(const ArregloDeCursos &o){
			Cursos = new Curso[o.tamanio];
			tamanio = o.tamanio;
			for(int j=0; j<tamanio;j++){
				Cursos[j] = o.Cursos[j];
			}
		}
		
		~ArregloDeCursos(){
			delete [] Cursos;
		}
		
		void redimensionar(const int tamanio2){
			Curso *ptr = new Curso[tamanio2];
			int menortamanio;
			if(tamanio2>tamanio)
				menortamanio = tamanio;
			else
				menortamanio = tamanio2;
			for(int k=0; k<menortamanio; k++){
				ptr[k]=Cursos[k];
			}
			
			tamanio = tamanio2;
			delete[] Cursos;
			Cursos=ptr;
		}
		
		void push_back(const Curso &p){
		    redimensionar(tamanio +1);
   			Cursos[tamanio-1]=p;
		}
		
		void insert(const int posicion, const Curso &p){
			redimensionar(tamanio+1);
			Curso aux;
			for(int l=tamanio-1; l<posicion; l--){
				Cursos[l] = Cursos[l-1];
				
			}
			Cursos[posicion]=p;
		}
		
		void remove(const int pos){
			Curso aux, Vacio;
			for (int m = pos;m < tamanio-1; m++){
				aux = Cursos[m];
				Cursos[m]=Cursos[m+1];
				Cursos[m+1]=aux;
			}
			Cursos[tamanio-1] = Vacio;
		}
		
		int getSize() const{
			return tamanio;
		}
		
		void clear(){
			delete [] Cursos;
		}
};

int main(){
	
	//Creamos un arreglo de Cursos 
	//Se instancian varias Clases Cursos
	//Podemos modificar o establecer los valores de nuestos objetos mediante los setters
	//Mostramos los valores de nuestros objetos mediante los getters
	
	//Instanciamos una clase ArregloDeCursos que tena como atributo el arreglo de Cursos
	//Mediante esta clase podemos modificar nuestro arreglo de Cursos con varios metodos de la clase ArregloDeCursos
	
	return 0;
}
