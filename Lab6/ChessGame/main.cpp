#include<iostream>
#include"ChessPiece.h"
int main() {
    
    Bishop b1(5, 7, "Bishop", "black");
    //std::cout << b1.get_x() << " " << b1.get_y() << " " << b1.get_name() << " " << b1.get_color() << std::endl;
    //std::cout << b1.movePiece(8, 4) << std::endl;
    //std::cout << b1.get_x() << " " << b1.get_y() << " " << b1.get_name() << " " << b1.get_color() << std::endl;
    

    Rook r1(1, 1, "Rook", "white");
    //std::cout << r1.get_x() << " " << r1.get_y() << " " << r1.get_name() << " " << r1.get_color() << std::endl;
    //std::cout << r1.movePiece(1, 8) << std::endl;
    //std::cout << r1.get_x() << " " << r1.get_y() << " " << r1.get_name() << " " << r1.get_color() << std::endl;

    Pawn p1(6, 2, "Pawn", "white");
    //std::cout << p1.get_x() << " " << p1.get_y() << " " << p1.get_name() << " " << p1.get_color() << std::endl;
    //std::cout << p1.movePiece(5, 3) << std::endl;
    //std::cout << p1.get_x() << " " << p1.get_y() << " " << p1.get_name() << " " << p1.get_color() << std::endl;

    Queen q1(2, 2, "Queen", "white");
    //std::cout << q1.get_x() << " " << q1.get_y() << " " << q1.get_name() << " " << q1.get_color() << std::endl;
    //std::cout << q1.movePiece(1,1) << std::endl;
    //std::cout << q1.get_x() << " " << q1.get_y() << " " << q1.get_name() << " " << q1.get_color() << std::endl;

    King k1(5, 5, "King", "black");
    //std::cout << k1.get_x() << " " << k1.get_y() << " " << k1.get_name() << " " << k1.get_color() << std::endl;
    //std::cout << k1.movePiece(6, 6) << std::endl;
    //std::cout << k1.get_x() << " " << k1.get_y() << " " << k1.get_name() << " " << k1.get_color() << std::endl;

    bool stop = false;
    unsigned int x1, x2;
    string option;
    while(!stop) {
        std::cout << std::endl;
        std::cout << b1.get_x() << " " << b1.get_y() << " " << b1.get_name() << " " << b1.get_color() << std::endl;
        std::cout << r1.get_x() << " " << r1.get_y() << " " << r1.get_name() << " " << r1.get_color() << std::endl;
        std::cout << p1.get_x() << " " << p1.get_y() << " " << p1.get_name() << " " << p1.get_color() << std::endl;
        std::cout << q1.get_x() << " " << q1.get_y() << " " << q1.get_name() << " " << q1.get_color() << std::endl;
        std::cout << k1.get_x() << " " << k1.get_y() << " " << k1.get_name() << " " << k1.get_color() << std::endl;
        std::cout << "Move this piece: (Bishop ,Rook, Pawn, Queen or King)" << std::endl;
        std::cin >> option;
        std::cout << "With coordinates: " << std::endl;
        std::cin >> x1>>x2;
        if (option == "Bishop")
        {
            std::cout << b1.movePiece(x1, x2) << std::endl;
            std::cout << b1.get_x() << " " << b1.get_y() << " " << b1.get_name() << " " << b1.get_color() << std::endl;
        }
        else if (option == "Rook")
        {
            std::cout << r1.movePiece(x1, x2) << std::endl;
            std::cout << r1.get_x() << " " << r1.get_y() << " " << r1.get_name() << " " << r1.get_color() << std::endl;
        }
        else if (option == "Pam")
        {
            std::cout << p1.movePiece(x1, x2) << std::endl;
            std::cout << p1.get_x() << " " << p1.get_y() << " " << p1.get_name() << " " << p1.get_color() << std::endl;
        }
        else if (option == "Queen")
        {
            std::cout << q1.movePiece(x1, x2) << std::endl;
            std::cout << q1.get_x() << " " << q1.get_y() << " " << q1.get_name() << " " << q1.get_color() << std::endl;
        }
        else if (option == "King")
        {
            std::cout << k1.movePiece(x1, x2) << std::endl;
            std::cout << k1.get_x() << " " << k1.get_y() << " " << k1.get_name() << " " << k1.get_color() << std::endl;
        }
        else
            stop = true;
    }
    return 0;
}