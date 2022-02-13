#include <iostream>
using namespace std;

#include <string>
#include "Vector2.h"
#include "ui.h"

void Ui::anwendung()
{
	v2.setCoords(3, 4);

	Vector2 vec1, vec2;
	Vector2 vec3;
	Vector2* pv;
	pv = new Vector2();

	// Vorteil von Klassen: eine ungenaue Initialisierung ist hier
	// nicht möglich, da kein Zugriff auf die Länge möglich ist.
	vec1.setCoords(4, 3);
	vec2.setCoords(5, 2);
	pv->setCoords(30, 40);

	// Addition ist nur über die Memberfunktion möglich!
	vec3 = vec1.add(&vec2);

	std::cout << vec1.toString() << endl;
	std::cout << vec2.toString() << endl;
	std::cout << vec3.toString() << endl;
	std::cout << v2.toString() << endl;
	std::cout << pv->toString() << endl;
	delete pv;
}
