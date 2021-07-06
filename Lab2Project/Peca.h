#pragma once
#ifndef PECA_H
#define PECA_H
#include <iostream>
#include "Ponto.h"
#include "Tabuleiro.h"

class Jogador;

using namespace std;

class Peca
{
public:
	Peca(bool isBranco);
	virtual ~Peca(); //destrutor
	virtual bool moverPara(Jogador & porJogador, Ponto & paraPonto);
	virtual void setLocalizacao(Ponto* localizacao);
	virtual int valor() const = 0;
	bool isBranco() const;
	string cor() const;
	virtual void display() const = 0;
	virtual bool podeMoverPara(Ponto & localizacao) const = 0;
	bool estaNoPonto() const;
	Ponto*localizacao()const;
protected:
	bool _isBranco;
	string _cor;
private:
	Ponto* _ponto;
};

#endif
