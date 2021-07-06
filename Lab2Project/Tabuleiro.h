#ifndef TABULEIRO_H
#define TABULEIRO_H

#include <ostream>
#include "Ponto.h"

using namespace std;

class Tabuleiro
{
public:

	//Destrutor
	~Tabuleiro();


	static Tabuleiro* getTabuleiro();


	Ponto* pontoAt(int x, int y) const;


	bool isClearVertical(Ponto& de, Ponto& para) const;


	bool isClearHorizontal(Ponto& de, Ponto& para) const;

	bool isClearDiagonal(Ponto& de, Ponto& para) const;

	//
	bool isEndRow(Ponto& localizacao) const;


	void display(ostream& os) const;

private:


	Tabuleiro();

	// Private attributes
	static Tabuleiro* _theTabuleiro;
	static const int _DIMENSION = 8;
	Ponto* _pontos[_DIMENSION][_DIMENSION];

};

#endif
