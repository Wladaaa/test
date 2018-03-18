/**
 * Project Untitled
 */


#ifndef _TUNIVERSITY_H
#define _TUNIVERSITY_H
#include<TStudent.h>
#include<iostream>
#include<vector>
#include<string>
class TUniversity {
public: 
    
    /**
     * @param st
     */
    void attach(TStudent* st);
    
    void detach();
    
    /**
     * @param i
     */
    void printData(int i);
    
    /**
     * @param i
     * @param name
     * @param age
     */
    void setData(int i, string name, int age);
private: 
    vector<TStudent*> students;
};

#endif //_TUNIVERSITY_H