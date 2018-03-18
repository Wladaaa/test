/**
 * Project Untitled
 */


#include "TUniversity.h"

/**
 * TUniversity implementation
 */


/**
 * @return void
 */
void TUniversity::attach() {
    TStudent* nowy = new TStudent[5];
	students.push_back(nowy);
	
}

/**
 * @return void
 */
void TUniversity::detach() {
    for (it=students.begin(); it!=students.end(); ++it)
		delete [] *it;
	}
}