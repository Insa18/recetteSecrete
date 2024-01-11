#pragma once
#include <iostream>;
using namespace std;

class Tonneau
{
private:
	int contenance, contenu = 0;
public:
	void remplir();
	void vider();
	void transferer(Tonneau& dest);
	void affTonneau();
	int getContenu();
	int getContenant();
	Tonneau(int capa); // constructeur avec un paramètre de contenant 
};

