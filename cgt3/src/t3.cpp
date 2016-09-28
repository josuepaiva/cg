#include <iostream>
#include <cstdio>
#include "face.cpp"
#include "vertice.cpp"
#include "lista_vertice.cpp" 
#include "lista_face.cpp"
#include "importador.cpp"
//using namespace std;

 
int main(){
	
	Importador *import = new Importador();
	import->ler("cubo.obj");
	import->printa();
	
	return 0;
}
