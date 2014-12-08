/*
 * StudentViewTwo.cpp
 *
 *  Created on: 2/12/2014
 *      Author: javi
 */

#include <iostream>

#include "StudentViewTwo.h"

using namespace std;

namespace ejemplo_mvc {

void StudentViewTwo::printStudentDetails(Student s) {
	cout << "\t\tESTUDIANTE:" << endl;
	cout << "\t\tNOMBRE: " << s.getName() << endl;
	cout << "\t\tNÚMERO: " << s.getNollNo() << endl;

}

} /* namespace ejemplo_mvc */
