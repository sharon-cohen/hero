#pragma once
#include "Spiderman.h"
#include "CaptainAmerica.h"
#include "AnimalBasedSuperHero.h"
#include "ProfessionBasedSuperHero.h"
#include "SuperHero.h"
class CaptainSpider :
	public Spiderman, public CaptainAmerica
{
public:
	CaptainSpider();
	CaptainSpider(const char* name, double age, bool radioactive, const char* profession, int yearsExperience, double ageIncludingFreezing, const char* animal, double webSize);
	CaptainSpider(const char* profession, int yearsExperience, double ageIncludingFreezing, const char* animal, double webSize);
	CaptainSpider(double ageIncludingFreezing, double webSize);
	CaptainSpider(const CaptainSpider& captainSpider);
	~CaptainSpider();

	virtual void load(ifstream& in_file);
	virtual void save(ofstream& out_file) const;
};


