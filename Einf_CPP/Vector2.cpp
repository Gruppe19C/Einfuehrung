#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include "Vector2.h"

void Vector2::setCoords(int x, int y) {
	m_x = x; m_y = y;
	updateVectorLength();
}


//int add(int x, int y) { return x + y; } // globale Funktion

Vector2 Vector2::add(const Vector2* pOther)
{
	Vector2 result;
	// Die lokale funktion Vector2::add überdeckt die globale Funktion!
	// Der Zugriff auf die globale Funktion muss über den Scope-Operator erfolgen:
	//result.m_x = ::add(m_x, pOther->m_x);
	result.m_x = m_x + pOther->m_x;
	result.m_y = m_y + pOther->m_y;
	result.updateVectorLength();
	return result;
}

//void Vector2::print() {
//    std::cout<<"X-Koord: "  <<m_x <<", Y-Koord: " <<m_y 
//             <<", Laenge: " << m_length <<std::endl;
//}

void Vector2::updateVectorLength() {
	m_length = sqrt(m_x * m_x + m_y * m_y);
}

std::string Vector2::toString()
{
	std::stringstream s;
	s << "(" << m_x << ";" << m_y << ")   l = " << m_length;
	return s.str();
}