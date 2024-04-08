#include<string>
using std::string;


#pragma once
class ChessPiece
{
public:
	ChessPiece(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor);
	virtual bool movePiece(unsigned int newX, unsigned int newY) {
		return false;
	}

	unsigned int get_x() const;
	unsigned int get_y() const;
	string get_name() const;
	string get_color() const;

	void set_x(unsigned int new_x);
	void set_y(unsigned int new_y);
	void set_name(string new_name);
	void set_color(string new_color);
protected:
	unsigned int positionX;
	unsigned int positionY;
	string name;
private:
	string color;
};

class Bishop:public ChessPiece {
public:
	Bishop(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor);
	bool movePiece(unsigned int newX, unsigned int newY) override;
};
class Rook :public ChessPiece {
public:
	Rook(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor);
	bool movePiece(unsigned int newX, unsigned int newY) override;
};
class Pawn :public ChessPiece {
public:
	Pawn(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor);
	bool movePiece(unsigned int newX, unsigned int newY) override;
};
class Queen :public ChessPiece {
public:
	Queen(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor);
	bool movePiece(unsigned int newX, unsigned int newY) override;
};
class King :public ChessPiece {
public:
	King(unsigned int ppositionX, unsigned int ppositionY, string pname, string pcolor);
	bool movePiece(unsigned int newX, unsigned int newY) override;
};

