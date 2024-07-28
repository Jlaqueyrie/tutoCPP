#pragma once
#include <string>
#include <iostream>

using namespace std;
class personne
{
public:
	personne(string& nom, int32_t& age,string& ville);
	~personne();

	string nom;
	int age;
	string ville;
	
	int parle(string& texte);
	int presenteToi();

	int getAge();
	string getNom();
	string getVille();

};

