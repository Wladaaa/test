/**
 * Project Untitled
 */


#include "TStudent.h"

/**
 * TStudent implementation
 */


TStudent::TStudent() {

}

TStudent::~TStudent() {

}

/**
 * @param name
 * @return void
 */
void TStudent::setName(string name) {
    this.studentName=name;
}

/**
 * @return string
 */
string TStudent::getName() {
    return studentName;
}

/**
 * @param age
 * @return void
 */
void TStudent::setAge(int age) {
    this.studentAge=age;
}

/**
 * @return int
 */
int TStudent::getAge() {
    return studentAge;
}