#include "pch.h"
#include "Jogo.h"
#include "Peao.h"
#include "Ponto.h"

Jogo::Jogo()
{
}

Jogo::~Jogo()
{

	for (set<Peca*>::iterator itr = pecasBrancas.begin();
		itr != pecasBrancas.end(); ++itr)
	{
		delete *itr;
	}
	pecasBrancas.clear();
	for (set<Peca*>::iterator itr = pecasPretas.begin();
		itr != pecasPretas.end(); ++itr)
	{
		delete *itr;
	}
	pecasPretas.clear();

	delete &jogador1;
	delete &jogador2;
}

void Jogo::iniciar()
{
	Peca* aPeca;

	Ponto* aPonto;

	pecasBrancas = *(new set<Peca*>);
	pecasPretas = *(new set<Peca*>);


	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(1, 0);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(3, 0);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(5, 0);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(7, 0);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(0, 1);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(2, 1);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(4, 1);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(6, 1);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(1, 2);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(3, 2);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(5, 2);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(true);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(7, 2);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasBrancas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(0, 7);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(2, 7);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(4, 7);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(6, 7);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(1, 6);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(3, 6);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(5, 6);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(7, 6);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(0, 5);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(2, 5);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(4, 5);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	aPeca = new Peao(false);
	aPonto = Tabuleiro::getTabuleiro()->pontoAt(6, 5);
	aPonto->setOcupar(aPeca);
	aPeca->setLocalizacao(aPonto);
	pecasPretas.insert(aPeca);

	jogador1 = new Jogador("O", true, pecasBrancas);


	jogador2 = new Jogador("X", false, pecasPretas);

	proximoJogador = jogador2;
}

Jogador* Jogo::getProximoJogador()
{
	proximoJogador = adversarioDe(*proximoJogador);
	return proximoJogador;
}

Jogador* Jogo::adversarioDe(Jogador& jogador)
{
	Jogador* adversario;

	if (jogador.getNome() == jogador1->getNome())
	{
		adversario = jogador2;
	}
	else
	{
		adversario = jogador1;
	}

	return adversario;
}

Jogador* Jogo::jogador1 = NULL;
Jogador* Jogo::jogador2 = NULL;
Jogador* Jogo::proximoJogador = NULL;
set<Peca*> Jogo::pecasBrancas;
set<Peca*> Jogo::pecasPretas;