#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <iostream>
#include <fstream>
#include <string.h>
	using namespace std;
	
template <class T>
class archivo
{
	char nom[40];
	T BUF;
	fstream obj;
	public:
		archivo();
		archivo(char*c){strcpy(nom,c);}
		
		void abrir(){
			//Se limito ahora como archivo de texto y entrada
			//Ios binary si es un archivo binario (obligatorio)
			obj.open(nom,ios::in);
		}
		
		void cerrar(){
			obj.close();
		}
		
		T get_BUF(){
			return BUF;
		}
		
		bool es_fin(){
			//saber si el archivo ya llego hata la ultima linea
			return obj.eof();
		}
		
		void leer(char cad[]){
			//Aqui leera linea por linea
			obj.getline(cad,180,'\n');
		}
		
		//Convercion de texto a objeto con una funcion de prog
		void convertir(char cad[],T(*f)(char *k)){
			BUF=f(cad); //Convertir de cadena a objeto
		}
};

#endif
