#ifndef VERTICE_H
#define VERTICE_H

class Vertice{
	private:
		float x;
		float y;
		float z;
		Vertice *prox;
	public:
		Vertice(float x, float y, float z);
		~Vertice();
		float getX();
		float getY();
		float getZ();
		Vertice	*getProx();
		void setX(float x);
		void setY(float y);
		void setZ(float z);
		void setProx(Vertice *prox);
};

#endif
