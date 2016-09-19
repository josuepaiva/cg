#include "vertice.h"

Vertice::Vertice(float x, float y, float z){
	this->x = x;
	this->y = y;
	this->z = z;
}

Vertice::~Vertice(){}

float Vertice::getX(){
	return this->x;
}

float Vertice::getY(){
	return this->y;
}

float Vertice::getZ(){
	return this->z;
}

Vertice* Vertice::getProx(){
	return this->prox;
}

void Vertice::setX(float x){
	this->x = x;
}

void Vertice::setY(float y){
	this->y = y;
}

void Vertice::setZ(float z){
	this->z = z;
}

void Vertice::setProx(Vertice *prox){
	this->prox = prox;
}
