#ifndef __PERSON_H
#define __PERSON_H

#include <iostream>
#include <string.h>
using namespace std;

class Person
{
private:
	char* name;
	int id;

public:
	Person(const char* name, int id);
	Person(const Person& other);
	~Person();

	void operator=(const Person& other); //deep copying

	void setName(const char* name);
	void setID(int id);

	const char* getName() const;
	int getID() const;

	void show() const;

};

#endif // !__PERSON_H
