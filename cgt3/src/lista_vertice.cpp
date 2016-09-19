#include "lista_vertice.h"

ListaVertice::ListaVertice(){
	this->cabeca= NULL;
	this->anterior = NULL;
	this->tamanho = 0;
}

ListaVertice::~ListaVertice(){
	clean();
}

int ListaVertice::size(){
	return this->tamanho;
}

Vertice *ListaVertice::getCabeca(){
	return this->cabeca;
}

void ListaVertice::insere(Vertice dado){
	
	Vertice *vertice = new Vertice(dado.getX(), dado.getY(), dado.getZ());
	vertice->setProx(NULL);
	
	if(!this->cabeca){
		this->cabeca = vertice;
		this->tamanho++;
	}else{
		vertice->setProx(this->cabeca);
		this->cabeca = vertice;
		this->tamanho++;		
	}
}

void ListaVertice::remove(Vertice vertice){
	Vertice * aux = &vertice;
	Vertice * no = this->cabeca;
	if(!this->cabeca){
		std::cout<<"Lista vazia"<<std::endl;
	}else{
		while((no->getProx() != NULL) 
		&&(vertice.getX() != no->getX() &&
 		   vertice.getY() != no->getY() &&
 		   vertice.getZ() != no->getZ())){
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

void ListaVertice::printa(){
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

Vertice *ListaVertice::busca(Vertice vertice){
	for(int i = 0; i < this->tamanho; i++){
		this->anterior = this->cabeca;
		if(vertice.getX() == this->cabeca->getX() &&
 		   vertice.getY() == this->cabeca->getY() &&
 		   vertice.getZ() == this->cabeca->getZ()){
			return this->cabeca;
		}else{
			this->cabeca = this->cabeca->getProx();
		}
	}
	
	return NULL;
}

void ListaVertice::clean(){
	Vertice * aux;
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
