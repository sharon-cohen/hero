#pragma once
#include "SuperHero.h"
class ProfessionBasedSuperHero : virtual public SuperHero
{
public:
	ProfessionBasedSuperHero();
	ProfessionBasedSuperHero(const char* name, double age, bool radioactive, const char* profession, int yearsExperience);
	ProfessionBasedSuperHero(const char* profession, int yearsExperience);
	ProfessionBasedSuperHero(const ProfessionBasedSuperHero& professionBasedSuperHero);
	virtual ~ProfessionBasedSuperHero();

	void setProfession(const char* profession);
	const char* getProfession() const { return _profession; }
	void setYearsExperience(int yearsExperience);
	int getYearsExperience() const;

	virtual void load(ifstream& in_file);
	virtual void save(ofstream& out_file) const;
protected:
	int _yearsExperience;
	char* _profession;
};


