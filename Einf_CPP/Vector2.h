#ifndef VECTOR2_H // Um Mehrfachdefinition auszuschließen!
#define VECTOR2_H

class Vector2
{

public:

	void setCoords(int x, int y);           // Koordinaten setzen

	Vector2 add(const Vector2* pOther);     // addieren

	//void print();                           // ausgeben

	double get_length() { return m_length; }
	std::string toString();
private:

	// private Helper-Funktion
	void updateVectorLength();

	int     m_x, m_y; // Kodierrichtlinie:
	double  m_length; // Prefix 'm_', um Membervariablen zu kennzeichnen

};

#endif