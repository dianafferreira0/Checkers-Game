#include "pch.h"
#include "Ponto.h"
#include "Peca.h"


Ponto::Ponto(int x, int y) :_x(x), _y(y), _peca(NULL)
{
}

Ponto::~Ponto()
{
}

void Ponto::setOcupar(Peca* peca)
{
	_peca = peca;
}

int Ponto::getX()const
{
	return _x;
}

int Ponto::getY()const
{
	return _y;
}

bool Ponto::ocupado() const
{
	return _peca;
}

Peca* Ponto::ocupadoPor() const
{
	return _peca;
}