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
#include <vector>

namespace ejemplo_mvc {

class Student;

using Listener = std::function<void(const Student&)>;

class Student {
public:
	Student();
	virtual ~Student();

	const std::string& getName() const;
	void setName(const std::string& name);

	const std::string& getNollNo() const;
	void setNollNo(const std::string& nollNo);

	void connect(Listener listener);
	void disconnect(Listener listener);
private:
	std::string nollNo;
	std::string name;

	std::vector<Listener> listeners_;

	void notify() const;

};

} /* namespace ejemplo_mvc */
#endif /* STUDENT_H_ */
