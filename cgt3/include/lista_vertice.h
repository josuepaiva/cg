#ifndef LISTA_VERTICE_H
#define LISTA_VERTICE_H

#include "vertice.h"

class ListaVertice{
	private:
		Vertice *cabeca;
		Vertice *anterior;
		int tamanho;
	public:
		ListaVertice();
		~ListaVertice();
		int size();
		Vertice *getCabeca();
		void insere(Vertice dado);
		void remove(Vertice dado);
		void printa();
		Vertice *busca(Vertice dado);
		void clean();
};

#endif
