#ifndef FACE_H
#define FACE_H

class Face{
	private:
		int x;
		int y;
		int z;
		Face *prox;
	public:
		Face(int x, int y, int z);
		~Face();
		int getX();
		int getY();
		int getZ();
		Face *getProx();
		void setX(int x);
		void setY(int y);
		void setZ(int z);
		void setProx(Face *prox);

};

#endif
