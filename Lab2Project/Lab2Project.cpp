#include "pch.h"
#include <iostream>
#include "Jogo.h"
#include "Tabuleiro.h"

int main(int argc, char * const argv[])
{
	Jogador* jogadorAtual = NULL;

	// initialize a chess game and display the initial state
	Jogo::iniciar();
	Tabuleiro::getTabuleiro()->display(cout);

	// game loop in which players alternate making moves
	while (true)
	{
		jogadorAtual = Jogo::getProximoJogador();
		while (!jogadorAtual->fazerMovimento())
		{
			cerr << "Movimento Invalido. Tente Outra vez." << endl;
		}
		Tabuleiro::getTabuleiro()->display(cout);
	}

	return 0;
}
