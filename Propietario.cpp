#include "persona.cpp"
#include <iostream>

using namespace std; 

class Propietario : Persona{
	
	// atributos 
	
	private : string nit,cui; 
	
	// constructor 
	
	public : 
			Propietario(){
				
			}
			
			Propietario(string nom,string ape,string dir,int tel,string n,string fn) : Persona(nom,ape,dir,tel,f){
				
				nit = n;
				cui = c;
			}
			
			// metodos get y set 
			
			void setNit(string n){nit = n;}
			void setNombres(string nom){nombres = nom;}
			void setApellidos(string ape){apellidos = ape;}
			void setDireccion(string dir){direccion = dir;}
			void setTelefono(int tel){telefono = tel;}
			void setFn(string fn){fn = f}
			void setCUI(string cui){cui = c}
		
			// get (mmostrar el atributo) 
			
			string getNit(){return nit;}
			string getNombres(){return nombres;}
			string getApellidos(){return apellidos;}
			string getDireccion(){return direccion;}	
			int getTelefono(){return telefono;}
			stringFn(){return fn;}
			stringCui(){return cui;}
	void mostrar(){
		
		cout<<"__________________"<<endl;
		cout<<"Nit:"<<nit<<endl;
		cout<<"Nombres:"<<nombres<<endl;
		cout<<"Apellidos:"<<apellidos<<endl;
		cout<<"Direccion:"<<direccion<<endl;
		cout<<"Telefono:"<<telefono<<endl;
		cout<<"Fecha de nacimiento:"<<fn<<endl;
		cout<<"Cui:"<<cui<<endl;
	}
};