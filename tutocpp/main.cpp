#include "personne.h"
#include "ressources.h"

int main() {
	std::string nomDeLaPersonne = "Tristan";
	std::string villeDeResidance = "Toulouse";
	std::string discours = "on va où";

	int32_t age = 33;

	personne tristan(nomDeLaPersonne, age, villeDeResidance);
	tristan.presenteToi();
	tristan.parle(discours);
	return SUCCESS;
}