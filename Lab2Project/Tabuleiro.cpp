#include "pch.h"
#include "Tabuleiro.h"
#include "Peca.h"

Tabuleiro::Tabuleiro()
{

	for (int i = 0; i < _DIMENSION; i++)
	{
		for (int j = 0; j < _DIMENSION; j++)
		{
			_pontos[i][j] = new Ponto(i, j);
		}
	}
}

Tabuleiro::~Tabuleiro()
{

	for (int i = 0; i < _DIMENSION; i++)
	{
		for (int j = 0; j < _DIMENSION; j++)
		{
			delete[] _pontos[i][j];
		}
		delete[] _pontos[i];
	}
	delete[] _pontos;
}

Tabuleiro* Tabuleiro::getTabuleiro()
{
	if (!_theTabuleiro)
		_theTabuleiro = new Tabuleiro();
	return _theTabuleiro;
}

Ponto* Tabuleiro::pontoAt(int x, int y) const
{
	return _pontos[x][y];
}

bool Tabuleiro::isClearVertical(Ponto& de, Ponto& para) const
{
	Ponto* start = NULL;
	Ponto* end = NULL;
	bool valid = true;


	if (de.getY() <= para.getY())
	{
		start = &de;
		end = &para;
	}
	else
	{
		start = &para;
		end = &de;
	}


	if (start->getX() != end->getX())
	{
		valid = false;
	}
	else
	{

		for (int i = start->getY() + 1; i < end->getY(); i++)
		{

			if (pontoAt(start->getX(), i)->ocupado())
			{
				valid = false;
			}
		}
	}

	return valid;
}

bool Tabuleiro::isClearHorizontal(Ponto& de, Ponto& para) const
{
	Ponto* start = NULL;
	Ponto* end = NULL;
	bool valid = true;


	if (de.getX() <= para.getX())
	{
		start = &de;
		end = &para;
	}
	else
	{
		start = &para;
		end = &de;
	}


	if (start->getY() != end->getY())
	{
		valid = false;
	}
	else
	{

		for (int i = start->getX() + 1; i < end->getX(); i++)
		{

			if (pontoAt(i, start->getY())->ocupado())
			{
				valid = false;
			}
		}
	}

	return valid;
}

bool Tabuleiro::isClearDiagonal(Ponto& de, Ponto& para) const
{
	bool valid = true;
	int translationX = para.getX() - de.getX();
	int translationY = para.getY() - de.getY();
	int xDir = 1;
	int yDir = 1;

	if (translationX < 0)
	{
		xDir = -1;
	}

	if (translationY < 0)
	{
		yDir = -1;
	}


	if (abs(translationX) != abs(translationY))
	{
		valid = false;
	}
	else
	{

		for (int i = 1; i < abs(translationX); i++)
		{

			if (pontoAt(de.getX() + (i * xDir), de.getY() + (i * yDir))->ocupado())
			{
				valid = false;
			}
		}
	}

	return valid;
}

bool Tabuleiro::isEndRow(Ponto& localizacao) const
{
	return (localizacao.getY() == 0 || localizacao.getY() == (_DIMENSION - 1));
}

void Tabuleiro::display(ostream& os) const
{
	cout << "\n\n\Trabalho elaborado por: Diana Ferreira\n\n";

	os << endl << "   a   b   c   d   e   f   g   h" << endl;
	os << " ---------------------------------" << endl;
	for (int y = _DIMENSION - 1; y >= 0; y--)
	{
		os << y + 1;
		for (int x = 0; x < _DIMENSION; x++)
		{
			os << "| ";
			if (_pontos[x][y]->ocupado())
				_pontos[x][y]->ocupadoPor()->display();
			else
				os << "  ";
		}
		os << "| " << y + 1 << endl << " ---------------------------------" << endl;
	}
	os << "   a   b   c   d   e   f   g   h" << endl << endl;

}

Tabuleiro* Tabuleiro::_theTabuleiro = NULL;