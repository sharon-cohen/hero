#pragma once
#include <iostream>
#include <fstream>
#include <string.h>
#include <typeinfo>

using namespace std;

class SuperHero
{
public:
	SuperHero();
	SuperHero(const char* name, double age, bool radioactive = false);
	SuperHero(const SuperHero& superHero);
	virtual ~SuperHero();

	const char* getName() const;
	double getAge() const;
	bool getRadioactive() const;
	void setName(const char* name);
	void setAge(double age);
	void setRadioactive(bool radioactive);


	virtual void load(ifstream& in_file);
	virtual void save(ofstream& out_file) const;


protected:
	char* _name;
	double _age;
	bool _radioactive;

};

