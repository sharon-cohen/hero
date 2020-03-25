#include "Avengers.h"
#include "AnimalBasedSuperHero.h"
#include "ProfessionBasedSuperHero.h"
#include "CaptainAmerica.h"
#include "CaptainSpider.h"
#include "SuperHero.h"
Avengers::Avengers()
{
	_superHeros = new SuperHero*[20];
		for (int i = 0; i < 20; i++)
		{
			_superHeros[i] = new SuperHero();
		}
}
void Avengers::saveType(ofstream& out, const SuperHero* hero) const
{
	char type[2];
	if (typeid(*hero) == CaptainAmerica)
	{
		type[0] = 'C';
		type[1] = 'A';
	}
	
	if (typeid(*hero) == CaptainSpider)
	{
		type[0] = 'C';
		type[1] = 'S';
	}
	
	if (typeid(*hero) == AnimalBasedSuperHero)
	{
		type[0] = 'A';
		type[1] = 'B';
	}

	if (typeid(*hero) == ProfessionBasedSuperHero)
	{
		type[0] = 'P';
		type[1] = 'B';
	}
	
	if (typeid(*hero) == Spiderman)
	{
		type[0] = 'S';
		type[1] = 'P';
	}
	if (typeid(*hero) == SuperHero)
	{
		type[0] = 'S';
		type[1] = 'H';
	}
	
	out.write((char*)type, 2);

}
void Avengers::save(ofstream& out) const
{

}