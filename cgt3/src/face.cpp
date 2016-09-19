#include "face.h"

Face::Face(int x, int y, int z){
	this->x = x;
	this->y = y;
	this->z = z;
}

Face::~Face(){}


int Face::getX(){
	return this->x;
}

int Face::getY(){
	return this->y;
}

int Face::getZ(){
	return this->z;
}

Face *Face::getProx(){
	return this->prox;
}

void Face::setX(int x){
	this->x = x;
}

void Face::setY(int y){
	this->y = y;
}

void Face::setZ(int z){
	this->z = z;
}

void Face::setProx(Face *prox){
	this->prox  = prox;
}
