/*
	NOMS DES MEMBRES DE L'ÉQUIPE:
	Nathan Plourde-Hébert, 

	Ce devoir vise à implémenter un programme complet (8-puzzle) qui applique les stratégies de recherche
	vues en classe, afin de trouver la solution à un jeu déterministe à un seul joueur.

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
