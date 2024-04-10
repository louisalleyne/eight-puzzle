/*
	NOMS DES MEMBRES DE L'�QUIPE:
	Nathan Plourde-H�bert, 

	Ce devoir vise � impl�menter un programme complet (8-puzzle) qui applique les strat�gies de recherche
	vues en classe, afin de trouver la solution � un jeu d�terministe � un seul joueur.

*/

#pragma once

#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <stdexcept>

#include "Etat.h"

struct Noeud_Arbre
{
	std::vector < std::vector < int> > etat;
	double valeur;
	Noeud_Arbre* Parent; 

};
class EtatDevoir : public Etat
{
public:

	std::vector<Etat*> coupsPossibles() const override;

	void afficher() override;

protected:

	std::string doObtenirCle() const override;

	bool doEstFinal() const override;

	double doObtenirF_h() const override;

private:
	int longueur = 3;
	std::vector<std::vector<int>> table;
	
};
