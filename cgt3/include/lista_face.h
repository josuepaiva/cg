#ifndef LISTA_FACE_H
#define LISTA_FACE_H

#include "face.h"

class ListaFace{
	private:
		Face *cabeca;
		Face *anterior;
		int tamanho;
	public:
		ListaFace();
		~ListaFace();
		int size();
		Face *getCabeca();
		void insere(Face dado);
		void remove(Face dado);
		void printa();
		Face *busca(Face dado);
		void clean();
};

#endif
