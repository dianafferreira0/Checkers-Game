#include "pch.h"
#include "Peao.h"
#include "Tabuleiro.h"
#include <string>

Peao::Peao(bool isBranco) : RestrictedPiece(isBranco), _delegate(NULL)
{
}

Peao::~Peao()
{
	if (_delegate)
		delete _delegate;
}

void Peao::setLocalizacao(Ponto* localizacao)
{
	Peca::setLocalizacao(localizacao);
}

int Peao::valor() const
{
	return 1;
}

bool Peao::moverPara(Jogador& porJogador, Ponto& para)
{
	bool valid = false;

	valid = RestrictedPiece::moverPara(porJogador, para);

	return valid;
}

bool Peao::podeMoverPara(Ponto& localizacao) const
{
	bool validMove = false;
	int translationX = localizacao.getX() - this->localizacao()->getX();
	int translationY = localizacao.getY() - this->localizacao()->getY();

	{

		if (!isBranco())
		{
			translationX *= -1;
			translationY *= -1;
		}

		if (!localizacao.ocupado() && translationY == 1 && (translationX == 1 || translationX == -1))
		{
			validMove = true;
		}

		else if (localizacao.ocupado() && translationY == 1 &&
			(translationX == 1 || translationX == -1))
		{
			validMove = true;
		}
	}

	return validMove;
}

void Peao::display() const
{
	if (_delegate)
	{
		_delegate->display();
	}
	else
	{
		cout << _cor;
	}
}

