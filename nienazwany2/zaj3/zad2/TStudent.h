/**
 * Project Untitled
 */


#ifndef _TSTUDENT_H
#define _TSTUDENT_H

class TStudent {
public: 
    
    TStudent();
    
    ~TStudent();
    
    /**
     * @param name
     */
    void setName(string name);
    
    string getName();
    
    /**
     * @param age
     */
    void setAge(int age);
    
    int getAge();
private: 
    string studentName;
    int studentAge;
};

#endif //_TSTUDENT_H