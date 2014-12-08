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
#include <functional>
#include <list>

namespace ejemplo_mvc {

class Student;

using Listener = std::function<void(const Student&)>;
using Connection = std::list<Listener>::iterator;

class Student {
public:

	const std::string& getName() const;
	void setName(const std::string& name);

	const std::string& getNollNo() const;
	void setNollNo(const std::string& nollNo);

	Connection connect(Listener l);
	void disconnect(Connection c);

private:
	std::string nollNo;
	std::string name;

	// http://www.cplusplus.com/reference/list/list/
	std::list<Listener> listeners_;

	void notify() const;

};

} /* namespace ejemplo_mvc */
#endif /* STUDENT_H_ */
