#include "personne.h"
#include "ressources.h"

personne::personne(string& nom , int32_t& age,string& ville) {

	personne::nom = nom;
	personne::age = age;
	personne::ville = ville;


}
personne::~personne()
{
}
int personne::parle(string& texte) {

	cout << texte << endl;

	return SUCCESS;

}

int personne::presenteToi() {

	cout << "je m'appel(le) : " <<personne::getNom()<<"  j'ai  "<< to_string(personne::age)<<"ans " << endl;
	return SUCCESS;
}

int personne::getAge() {

	return age;
}

string personne::getNom() {

	return nom;
}

string personne::getVille() {
	return ville;
}
