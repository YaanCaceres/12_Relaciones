#include <iostream>
#include <string>
using namespace std; 

class Display{
	private:
		string tipo= "digital";
	public:
	    Display(string t){
	    	tipo=t;
		}
		string getTipo(){
			return tipo;
		}           
};

class Hora{
	private:
		int hora;
		int minutos; 
		int segundos;
	public: 
	    Hora(int h, int m, int s){
	    	hora=h;
	    	minutos=m;
	    	segundos=s;
		}
		int getHora(){
			return hora;
		}
		int getMinutos(){
			return minutos;
		}
		int getSegundos(){
			return segundos;
		}
};

class Reloj {
	private:
		Display *pDisplay;
		Hora *pHora;
	public:
		reloj(int h, int m, int s){
			
		}
