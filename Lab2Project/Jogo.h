#pragma once
#ifndef JOGO_H
#define JOGO_H

#include <set>
#include <iostream>
#include "Tabuleiro.h"
#include "Peca.h"
#include "Jogador.h"

using namespace std;

class Jogo
{
public:

	// Destrutor
	~Jogo();

	static void iniciar();


	static Jogador* getProximoJogador();

	static Jogador* adversarioDe(Jogador& jogador);

private:
	Jogo();

	static Jogador* jogador1;
	static Jogador* jogador2;
	static Jogador* proximoJogador;
	static set<Peca*> pecasBrancas;
	static set<Peca*> pecasPretas;

};

#endif
