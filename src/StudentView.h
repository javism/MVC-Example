/*
 * StudentView.h
 *
 *  Created on: 24/11/2014
 *      Author: javi
 */

#ifndef STUDENTVIEW_H_
#define STUDENTVIEW_H_

#include <string>

using namespace std;

namespace ejemplo_mvc {

class StudentView {
public:
	StudentView();
	virtual ~StudentView();

	void printStudentDetails(string studentName, string studentRollNo);
};

} /* namespace ejemplo_mvc */
#endif /* STUDENTVIEW_H_ */
