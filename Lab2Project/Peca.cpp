#include "pch.h"
#include "Peca.h"
#include <string>
#include "Peca.h"
#include "Jogador.h"

Peca::Peca(bool isBranco) : _isBranco(isBranco), _ponto(NULL)
{
	if (isBranco)
		_cor = "O ";
	else
		_cor = "X ";
}

Peca::~Peca()
{
}

bool Peca::moverPara(Jogador& porJogador, Ponto& paraPonto)
{
	bool movimentoValido = false;
	Peca* paraComer = NULL;
	Ponto* doPonto = _ponto;


	if (_isBranco == porJogador.isBranco())
	{

		if (podeMoverPara(paraPonto))
		{

			if (paraPonto.ocupado())
			{
				paraComer = paraPonto.ocupadoPor();

				if (paraComer->isBranco() != porJogador.isBranco())
				{
					movimentoValido = true;
				}
			}

			else
			{
				movimentoValido = true;
			}

			if (movimentoValido)
			{

				if (paraComer)
				{
					paraComer->setLocalizacao(NULL);
				}


				_ponto->setOcupar(NULL);


				_ponto = &paraPonto;


				_ponto->setOcupar(this);
			}
		}
	}

	return movimentoValido;
}

void Peca::setLocalizacao(Ponto* localizacao)
{
	_ponto = localizacao;
}

bool Peca::isBranco() const
{
	return _isBranco;
}

string Peca::cor() const
{
	return _cor;
}

bool Peca::estaNoPonto() const
{
	return _ponto;
}

Ponto* Peca::localizacao() const
{
	return _ponto;
}
