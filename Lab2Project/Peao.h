#pragma once
#ifndef PEAO_H
#define PEAO_H

#include <iostream>
#include "Ponto.h"

#include "restrictedPiece.h"


using namespace std;

class Peao : public RestrictedPiece
{
public:

	Peao(bool isBranco);

	~Peao();

	void setLocalizacao(Ponto * localizacao);


	void setLocalizao(Ponto* localizacao);


	int valor() const;

	bool moverPara(Jogador& porJogador, Ponto& para);


	bool podeMoverPara(Ponto& localizacao) const;

	void display() const;

private:

	// Private attributes
	Peca* _delegate;

};

#endif