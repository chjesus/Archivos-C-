#include <iostream>
#include "archivo.h"
#include "alumno.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	char cad[180];
	char nombrearchivo[50]="alumno.txt";
  archivo<alumno>arc(nombrearchivo);
  arc.abrir();
  alumno reg;
  while(true){
  	arc.leer(cad);
  	arc.convertir(cad,conver);
  	cout<<arc.get_BUF();
  	if(arc.es_fin())break;
  }
  arc.cerrar();
  
}
