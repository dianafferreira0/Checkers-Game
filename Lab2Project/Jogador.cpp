#include "pch.h"
#include "Jogador.h"
#include "Tabuleiro.h"
#include "Jogo.h"
#include <iostream>
#include <string>
using namespace std;

#define X_MIN 'a'
#define X_MAX 'h'
#define Y_MIN '1'
#define Y_MAX '8'

Jogador::Jogador(string nome, bool isBranco, set<Peca*>& minhasPecas) :
	_nome(nome), _isBranco(isBranco), _minhasPecas(minhasPecas)
{
}

Jogador::~Jogador()
{
}

bool Jogador::fazerMovimento()
{
	string badInput;
	string doPonto = "  ";
	string paraPonto = "  ";
	int deX;
	int deY;
	int paraX;
	int paraY;


	cout << "Jogador " << _nome << " exemplo de movimento (ex: b3 a4): ";
	cin >> doPonto >> paraPonto;

	while (doPonto.length() != 2 ||
		paraPonto.length() != 2 ||
		tolower(doPonto.at(0)) < X_MIN ||
		tolower(doPonto.at(0)) > X_MAX ||
		tolower(paraPonto.at(0)) < X_MIN ||
		tolower(paraPonto.at(0)) > X_MAX ||
		tolower(doPonto.at(1)) < Y_MIN ||
		tolower(doPonto.at(1)) > Y_MAX ||
		tolower(paraPonto.at(1)) < Y_MIN ||
		tolower(paraPonto.at(1)) > Y_MAX ||
		!(Tabuleiro::getTabuleiro()->pontoAt(tolower(doPonto.at(0)) - X_MIN,
			tolower(doPonto.at(1)) - Y_MIN)->ocupado())
		)
	{
		cerr << "Invalid move. Try again." << endl;
		cin.clear();
		getline(cin, badInput);
		cout << _nome << " player enter move (e.g. b3 a4): ";
		cin >> doPonto >> paraPonto;
	}
	system("cls");
	deX = tolower(doPonto.at(0)) - X_MIN;
	deY = tolower(doPonto.at(1)) - Y_MIN;
	paraX = tolower(paraPonto.at(0)) - X_MIN;
	paraY = tolower(paraPonto.at(1)) - Y_MIN;


	return Tabuleiro::getTabuleiro()->pontoAt(deX, deY)->ocupadoPor()->moverPara(*this,
		*(Tabuleiro::getTabuleiro()->pontoAt(paraX, paraY)));
}

void Jogador::comer(Peca* aPeca)
{

	aPeca->setLocalizacao(NULL);


	_pecasComidas.insert(aPeca);
}

string Jogador::getNome() const
{
	return _nome;
}

bool Jogador::isBranco() const
{
	return _isBranco;
}

set<Peca*>* Jogador::minhasPecas() const
{
	return &_minhasPecas;
}
