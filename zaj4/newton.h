//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Newton.h
//  @ Date : 19.03.2018
//  @ Author :
//
//


#if !defined(_NEWTON_H)
#define _NEWTON_H


class Newton {
public:
    double getRes();
    Newton(int x, int y);
private:
    double res;
    int silnia(int x);
};

#endif  //_NEWTON_H