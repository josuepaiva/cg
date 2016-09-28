#include "importador.h"

Importador::Importador(){
	this->listaVertice = new ListaVertice();
	this->listaFace = new ListaFace();
}

Importador::~Importador(){
	
}

ListaVertice* Importador::getListaVertice(){
	return this->listaVertice;
}

ListaFace* Importador::getListaFace(){
	return this->listaFace;
}

FILE* Importador::getFile(){
	return this->arquivo;
}

void Importador::setListaVertice(ListaVertice *lista){
	this->listaVertice = lista;
}

void Importador::setListaFace(ListaFace *lista){
	this->listaFace = lista;
}

void Importador::setFile(FILE *file){
	this->arquivo = file;
}

void Importador::ler(std::string nome_arquivo){
	
 
    char c[100], j;
    float x, y, z;
    int i = 0, auxv = 0;

    arquivo = fopen(nome_arquivo.c_str(),"r");
 
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
}

void Importador::printa(){

	this->listaVertice->printa();
}
