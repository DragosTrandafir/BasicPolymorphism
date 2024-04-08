#include "ChessPiece.h"
#include<iostream>
ChessPiece::ChessPiece(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor)
{
	positionX = ppositionX;
	positionY = ppositionY;
	name = pname;
	color = pcolor;
}

unsigned int ChessPiece::get_x() const
{
	return this->positionX;
}

unsigned int ChessPiece::get_y() const
{
	return this->positionY;
}

string ChessPiece::get_name() const
{
	return this->name;
}

string ChessPiece::get_color() const
{
	return this->color;
}

void ChessPiece::set_x(unsigned int new_x)
{
	if (new_x <= 8 && new_x >= 1)
		this->positionX = new_x;
	else
	{
		std::cout << "Not available position" << std::endl;
		exit(-1);
	}
}

void ChessPiece::set_y(unsigned int new_y)
{
	if (new_y <= 8 && new_y >= 1)
		this->positionY = new_y;
	else
	{
		std::cout << "Not available position" << std::endl;
		exit(-1);
	}
}

void ChessPiece::set_name(string new_name)
{
	this->name = new_name;
}

void ChessPiece::set_color(string new_color)
{
	this->color = new_color;
}

Bishop::Bishop(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor): ChessPiece{ ppositionX ,ppositionY,  pname,pcolor }
{
}

bool Bishop::movePiece(unsigned int newX, unsigned int newY)
{
	//only diagonally
	if ((newX + newY == positionX + positionY) || (newX - newY) == positionX - positionY )
	{
		ChessPiece::set_x(newX);
		ChessPiece::set_y(newY);
		return true;
	}
	ChessPiece::movePiece(newX,newY);

}

Rook::Rook(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor):ChessPiece { ppositionX, ppositionY, pname, pcolor }
{
}

bool Rook::movePiece(unsigned int newX, unsigned int newY)
{
	// same column or row
	if (newX == positionX  || newY ==positionY )
	{
		ChessPiece::set_x(newX);
		ChessPiece::set_y(newY);
		return true;
	}
	ChessPiece::movePiece(newX, newY);
}

Pawn::Pawn(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor):ChessPiece{ ppositionX ,ppositionY,  pname,pcolor }
{
	
}

bool Pawn::movePiece(unsigned int newX, unsigned int newY)
{
	// one forward or one in front diagonal (we dont take into consideration the first move, which can let the pawn move 2 positions in front)
	if (newX == positionX-1 && (newY == positionY || newY == positionY-1 || newY == positionY+1))
	{
		ChessPiece::set_x(newX);
		ChessPiece::set_y(newY);
		return true;
	}
	ChessPiece::movePiece(newX, newY);
}

Queen::Queen(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor):ChessPiece{ ppositionX ,ppositionY,  pname,pcolor }
{
}

bool Queen::movePiece(unsigned int newX, unsigned int newY)
{
	// any position diagonally or on the same row and col
	if (((newX + newY == positionX + positionY) || (newX - newY) == positionX - positionY)|| (newX == positionX || newY == positionY))
	{
		ChessPiece::set_x(newX);
		ChessPiece::set_y(newY);
		return true;
	}
	ChessPiece::movePiece(newX, newY);
}

King::King(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor):ChessPiece{ ppositionX ,ppositionY,  pname,pcolor }
{
}

bool King::movePiece(unsigned int newX, unsigned int newY)
{
	//The king can move only one square horizontally, vertically, or diagonally. We ignore the castle move.
		// any position diagonally or on the same row and col
	for(unsigned int i=positionX-1;i<=positionX+1;i++)
		for (unsigned int j = positionY - 1; j <= positionY + 1; j++)
			if(i==newX and j==newY)
	{
		ChessPiece::set_x(newX);
		ChessPiece::set_y(newY);
		return true;
	}
	ChessPiece::movePiece(newX, newY);
}
