#pragma once
#ifndef PONTO_H
#define PONTO_H

class Peca;

using namespace std;

class Ponto
{
private:
	int _x;
	int _y;
	Peca* _peca;
public:
	Ponto(int x, int y); //Cria um ponto.
	Ponto();
	~Ponto(); //Destrutor
	void setOcupar(Peca* peca);
	int getX() const;
	int getY() const;
	bool ocupado() const;
	Peca*ocupadoPor() const;
};

#endif