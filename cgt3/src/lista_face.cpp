#include "lista_face.h"

ListaFace::ListaFace(){
	this->cabeca= NULL;
	this->anterior = NULL;
	this->tamanho = 0;
}

ListaFace::~ListaFace(){
	clean();
}

int ListaFace::size(){
	return this->tamanho;
}

Face *ListaFace::getCabeca(){
	return this->cabeca;
}

void ListaFace::insere(Face dado){
	
	Face *face = new Face(dado.getX(), dado.getY(), dado.getZ());
	face->setProx(NULL);

	if(!this->cabeca){
		this->cabeca = face;
		this->tamanho++;
		this->anterior = face;
	}else{
		this->anterior->setProx(face);
		this->anterior = face;
		this->tamanho++;		
	}
}

void ListaFace::remove(Face face){
	Face * no = this->cabeca;
	if(!this->cabeca){
		std::cout<<"Lista vazia"<<std::endl;
	}else{
		while((no->getProx() != NULL) 
		&&(face.getX() != no->getX() &&
 		   face.getY() != no->getY() &&
 		   face.getZ() != no->getZ())){
			this->anterior = no;
			no = no->getProx();	
		}
		if(no == NULL){
			std::cout<<"Elemento nao encontrado"<<std::endl;
		}else{
			if(this->cabeca == no){
				this->cabeca = no->getProx();
				this->tamanho--;
			}else{
				this->anterior->setProx(no->getProx());
				this->tamanho--;
				delete no;
			}
		}	
	}
}

void ListaFace::printa(){
	int size = this->tamanho;
	if(!this->cabeca){
		std::cout<<"Lista vazia"<<std::endl;
	}else{
		for(int i = 0; i < this->tamanho; i++){
			std::cout<<"X = "<<cabeca->getX()<<" Y = "<<cabeca->getY()<<" Z = "<<cabeca->getZ()<<std::endl;
			this->cabeca = this->cabeca->getProx();
		}
	}
	
}

Face *ListaFace::busca(Face face){
	for(int i = 0; i < this->tamanho; i++){
		this->anterior = this->cabeca;
		if(face.getX() == this->cabeca->getX() &&
 		   face.getY() == this->cabeca->getY() &&
 		   face.getZ() == this->cabeca->getZ()){
			return this->cabeca;
		}else{
			this->cabeca = this->cabeca->getProx();
		}
	}
	
	return NULL;
}

void ListaFace::clean(){
	Face * aux;
	int size = this->tamanho;
	if(!this->cabeca){
		std::cout<<"Lista vazia"<<std::endl;
	}else{
		for(int i = 0; i < size; i++){
			aux = this->cabeca->getProx();
			delete this->cabeca;
			this->tamanho--;
			this->cabeca = aux;
		}
		
	}
}
