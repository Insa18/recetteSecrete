#include "Tonneau.h"
#include <iostream>;
using namespace std;

void Tonneau::remplir()
{
	contenu = contenance;
}

void Tonneau::vider()
{
	contenu = 0;
}


void Tonneau::transferer(Tonneau& dest)
{
	int quant;
	quant = dest.contenance - dest.contenu;
	if ((contenu + dest.getContenu()) <= dest.getContenant()) {
		dest.contenu += contenu;
		contenu = 0;
	}
	else {
		if ((contenu - quant >= 0) && (dest.contenu + quant <=dest.contenance)) {
			contenu = contenu - quant;
			dest.contenu = dest.contenu + quant;
		}
	}
}

void Tonneau::affTonneau()
{
	cout << "Tonneau de " << contenance << " L : contient " << contenu << " L" << endl;
}

int Tonneau::getContenu()
{
	return contenu;
}

int Tonneau::getContenant()
{
	return contenance;
}

Tonneau::Tonneau(int capa)
{
	contenance = capa;
}
