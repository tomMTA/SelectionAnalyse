#include "person.h"

#pragma warning(disable:4996)


Person::Person(const char* name, int id)
{
	setName(name);
	setID(id);
}

void Person::operator=(const Person& other)
{
	setName(other.getName());
	setID(other.getID());
}

Person::Person(const Person& other)
{
	setName(other.name);
	setID(other.id);
}

Person::~Person()
{
	delete[] name;
}

int Person::getID() const
{
	return id;
}

const char* Person::getName() const
{
	return name;
}

void Person::setID(int id)
{
	this->id = id;
}

void Person::setName(const char* name)
{
	if (!name)
		this->name = nullptr;
	else
	{
		delete[] this->name;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
}


void Person::show() const
{
	cout << id << " " << name << endl;
}
