#include <iostream>
#include <fstream>
#include <string.h>
#include <stdlib.h>

class alumno{
	int ced;
	char nom[30];
	public:
		alumno(){}
		alumno(int c,char *ca){
			ced=c;
			strcpy(nom,ca);
		}
		//Sobre carga de operadores
		  friend ostream & operator<<(  ostream &os, alumno  c ) { 
          os<< " "<<c.ced<<"  "<<c.nom;
          cout<<endl;
          return os;
      } 
};

	alumno conver(char *cad){
		char *p,nom[30];
		p=strtok(cad,",");
		int ced=atoi(p);
		p= strtok(NULL,"\n");
		strcpy(nom,p);
		return alumno(ced,nom);
	}
