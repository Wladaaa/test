/**
 * Project Untitled
 */


#include "TUniversity.h"

/**
 * TUniversity implementation
 */


/**
 * @param st
 * @return void
 */
void TUniversity::attach(TStudent* st) {
    students.push_back(st);
}

/**
 * @return void
 */
void TUniversity::detach() {
    students.pop_back();
}

/**
 * @param i
 * @return void
 */
void TUniversity::printData(int i) {
    std::cout<<"name - "<<students[i]->studentName<<" age - "<<students[i]->studentAge<<endl;
}

/**
 * @param i
 * @param name
 * @param age
 * @return void
 */
void TUniversity::setData(int i, string name, int age) {
    students[i].setName(name);
	students[i].setAge(age);
}