//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : SchematBernouliego.h
//  @ Date : 19.03.2018
//  @ Author :
//
//


#if !defined(_SCHEMATBERNOULIEGO_H)
#define _SCHEMATBERNOULIEGO_H

#include "Newton.h"

class SchematBernouliego {
public:
    double useSchemat(int k, double p, int n);
    SchematBernouliego();
private:
    double p;
    double q;
    int n;
    int k;
    Newton* WzorNewt;
};

#endif  //_SCHEMATBERNOULIEGO_H
