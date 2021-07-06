#pragma once
#ifndef JOGADOR_H
#define JOGADOR_H

#include <set>
#include "Peca.h"


using namespace std;

class Jogador
{
public:


	Jogador(string name, bool isWhite, set<Peca*>& minhasPecas);

	~Jogador();



	bool fazerMovimento();


	void comer(Peca* aPeca);


	string getNome() const;


	bool isBranco() const;

	set<Peca*>* minhasPecas() const;

private:

	// Private attributes
	string _nome;
	bool _isBranco;
	set<Peca*>& _minhasPecas;
	set<Peca*> _pecasComidas;
};

#endif