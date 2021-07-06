
#include "pch.h"
#include "restrictedPiece.h"
#include "Jogador.h"

RestrictedPiece::RestrictedPiece(bool isBranco) : Peca(isBranco)
{
	_moveu = false;
}

RestrictedPiece::~RestrictedPiece()
{
}

bool RestrictedPiece::moverPara(Jogador& porJogador, Ponto& para)
{
	bool validMove = Peca::moverPara(porJogador, para);

	// only change _moved if a valid move is made 
	// and this piece hasn't already been moved
	if (validMove && !_moveu)
	{
		_moveu = true;
	}

	return validMove;
}

bool RestrictedPiece::jaMoveu() const
{
	return _moveu;
}

