#pragma once
#include <math.h>
#include "matrix.h"

struct samples
{
	double x1;
	double x2;
	double id;
};

int oSize = 0;
int SizeT, Size1, Size2, Size3, Size4, Size5, Size6;
int vSize = 0;
int zoom = 1;
double meanX = 0, meanY = 0;
double sSX = 0, sSY = 0;

bool drawWeight = false;
bool vDraw = false;
bool randomPressed = false;
bool sizeofClass = false;	
bool tDraw = false;
int Ypoint(int x, double xx, double y, double z, int Carpan);


Matrix^ vActivation(Matrix^ x);
Matrix^ vTurev(Matrix^ x);

Matrix^ wActivation(Matrix^ x);
Matrix^ wTurev(Matrix^ x);
Matrix^ drop (Matrix^x,double o);