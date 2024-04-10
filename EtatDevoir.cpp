#include "EtatDevoir.h"

std::vector<Etat*> EtatDevoir::coupsPossibles() const
{
	return std::vector<Etat*>();
}

void EtatDevoir::afficher()
{
	
}

std::string EtatDevoir::doObtenirCle() const
{
	return "";
}

bool EtatDevoir::doEstFinal() const
{
	return false;
}

double EtatDevoir::doObtenirF_h() const
{
	return 0.0;
}

EtatDevoir::EtatDevoir() const
{
	this->Etat();
}