/*
 * Student.h
 *
 *  Created on: 24/11/2014
 *      Author: javi
 *      C++ version of http://www.tutorialspoint.com/design_pattern/mvc_pattern.htm
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

using namespace std;

namespace ejemplo_mvc {

class Student {
public:
	Student();
	virtual ~Student();

	const string& getName() const;
	void setName(const string& name);

	const string& getNollNo() const;
	void setNollNo(const string& nollNo);

private:
	string nollNo;
	string name;
};

} /* namespace ejemplo_mvc */
#endif /* STUDENT_H_ */
