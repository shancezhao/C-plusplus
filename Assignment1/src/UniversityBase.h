/*
 * UniversityBase.h
 *
 *  Created on: Jan 31, 2018
 *      Author: danielgmp
 */

#ifndef UNIVERSITYBASE_H_
#define UNIVERSITYBASE_H_

#include <iostream>
#include <string> 	// std::string
#include <vector>	// std::vector
//#include "AbstractPersonAPI.h"
#include "AbstractSchoolAPI.h"
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {


class UniversityBase: public AbstractSchoolAPI{
private:
	int id;				// University ID
	std::string name;	// University Name
	std::vector<AbstractPersonAPI *> employees;	// pointers to employee objects
	std::vector<AbstractPersonAPI *> students;	// pointers to student objects
public:
	UniversityBase();
	UniversityBase(int _id, std::string _name);
	virtual ~UniversityBase();
	int getId() const;
	void setId(int id);
	const std::string& getName() const;
	void setName(const std::string& name);

	/**
	 * Virtual methods:
	 * 1. Must be defined (implemented) in declaring class (AbstractSchoolAPI)
	 * 2. May be (optionally) overridden in deriving class (NortheasternU)
	 */
	virtual void addEmployee(AbstractPersonAPI *employeePtr);
	virtual void addStudent(AbstractPersonAPI *studentPtr);
	virtual std::string showStudents();
	virtual std::string showEmployees();

	virtual std::string info();	// return state string
	virtual std::string show();	// show state

	static void demo();
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* UNIVERSITYBASE_H_ */
