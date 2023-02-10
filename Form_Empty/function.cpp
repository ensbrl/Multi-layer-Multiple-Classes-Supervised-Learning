#pragma once
#include <math.h>
#include "matrix.h"
double lambda = 0.1;
int Ypoint(int x, double xx, double y, double z, int Carpan) {
	double temp = 0;
	temp = (x-Carpan) * xx / y + (z / y)+Carpan ;
	return temp;
}

Matrix^ vActivation(Matrix^ x) {
	Matrix^ temp = gcnew Matrix(x->row, x->column);
	for (int i = 0; i < x->row; i++)
	{
		if (x->get(i, 0) < 0)
			temp->set(0.4* x->get(i, 0), i, 0);
		else
			temp->set(x->get(i, 0), i, 0);
	}
	return temp;
}
Matrix^ vTurev(Matrix^ x) {
	Matrix^ temp = gcnew Matrix(x->row, x->column);
	for (int i = 0; i < x->row; i++)
	{
		if (x->get(i, 0) < 0)
			temp->set(0.4, i, 0);
		else
			temp->set(1, i, 0);
	}
	return temp;
}

Matrix^ wActivation(Matrix^ x) {
	Matrix^ temp = gcnew Matrix(x->row, x->column);
	for (int i = 0; i < x->row; i++)
	{
		temp->set((tanh(x->get(i, 0))), i, 0);
	}
	return temp;
}

Matrix^ wTurev(Matrix^ x) {
	Matrix^ temp = gcnew Matrix(x->row, x->column);
	for (int i = 0; i < x->row; i++)
	{
		temp->set((1 - pow(tanh(x->get(i, 0)), 2)), i, 0);
	}
	return temp;
}
Matrix^ drop(Matrix^ x, double o)
{
	Matrix^ temp = gcnew Matrix(x->row, x->column);
	for (int i = 0; i < x->row; i++)
	{
		for (int j = 0; j < x->column; j++)
		{
			temp->set(o -pow( x->get(i,j),2),i,j);
		}
	}
	return temp;
}
