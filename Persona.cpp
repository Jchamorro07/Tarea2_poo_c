class Persona {
	
	// atributos 
	
	protected : string nombres,apellidos,direccion,fn;
		  		int	telefono; 

	// constructor 
	
	protected :
				Persona(){
					
				}
				
				Persona (string nom,string ape,string dir,int tel,string f){
					
					nombres = nom;
					apellidos = ape;
					direccion = dir; 
					telefono = tel; 
				}
	
	//metodos
	void mostrar();
	
};