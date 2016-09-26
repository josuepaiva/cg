#include <iostream>
#include <cstdio>
#include "face.cpp"
#include "vertice.cpp"
#include "lista_vertice.cpp" 
#include "lista_face.cpp"
#include "importador.cpp"
//using namespace std;

 
int main(){
	
	ListaVertice *listaVertice;
	ListaFace *listaFace;
	
	listaVertice = new ListaVertice();
	listaFace = new ListaFace();
    FILE * arquivo;
 
    char c[100], j;
    float x, y, z;
    int i = 0, auxv = 0;

    arquivo = fopen("cubo.obj","r");
 
    while(fgets(c,121,arquivo)){
            int n = sscanf(c,"%c %f %f %f",&j,&x,&y,&z);
        if( (c[0]!='u' && c[0] != 's') && i == 4){
                if(c[0] == 'v'){
					Vertice vertice(x,y,z);
                    listaVertice->insere(vertice);
                }
                else{
                    if(c[0] =='f'){
                        Face face(x,y,z);
						listaFace->insere(face);
                    }
                }
        }
        if(i<4){
        i++;
        }
 
    }
	
	return 0;
}
