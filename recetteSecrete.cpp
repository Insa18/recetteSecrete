using namespace std;
#include <iostream>
#include "Tonneau.h"

int main()
{
	Tonneau t3(3);
	Tonneau t5(5);
	t5.affTonneau();
	t3.affTonneau();
	t5.remplir();
	t5.affTonneau();
	t3.affTonneau();
	t5.transferer(t3);
	t5.affTonneau();
	t3.affTonneau();
	t3.vider();
	t5.affTonneau();
	t3.affTonneau();
	t5.transferer(t3);
	t5.affTonneau();
	t3.affTonneau();
	t5.remplir();
	t5.affTonneau();
	t3.affTonneau();
	t5.transferer(t3);
	t5.affTonneau();
	t3.affTonneau();	
}
