/**
 * Project Untitled
 */


#ifndef _TUNIVERSITY_H
#define _TUNIVERSITY_H
#include<TStudent.h>

class TUniversity {
public: 
    void attach();
    void detach();
private: 
    vector <TStudent*> students;
    vector<TStudent*>::iterator it;
};

#endif //_TUNIVERSITY_H