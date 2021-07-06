#pragma once
#ifndef RESTRICTED_H
#define RESTRICTED_H

#include "Peca.h"

class Jogador;

using namespace std;

class RestrictedPiece : public Peca
{
public:

	RestrictedPiece(bool isBranco);

	virtual ~RestrictedPiece();

	//Move the piece to another square.

	virtual bool moverPara(Jogador& porJogador, Ponto& para);

	//

	bool jaMoveu() const;

private:

	// private attributes
	bool _moveu;

};

#endif
