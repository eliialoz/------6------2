/*
File: mytypes.h
Description:
Course: 150018 C++ Workshop, Exercise 6, Question 2
Author: Dan Zilberstein
Students: eli ialoz 311201354
		& avishay farkash 205918790
*/
#include"Polygon.h"
//Constructor
Polygon::Polygon(uint numSides) {
	if (numSides != 3 && numSides != 4) {
		std::cout << "enter sides for polygon:" << std::endl;
		_numSides = numSides;
		_sides = new uint[numSides];
		for (uint i = 0; i < numSides; i++)
			std::cin >> _sides[i];
	}
}
Polygon::Polygon(const Polygon& p1) {
	_numSides = p1._numSides;
	_sides = new uint(*(p1._sides));
}
Polygon::Polygon(Polygon&& p1) {
	_numSides = p1._numSides;
	_sides = p1._sides;
	p1._sides = nullptr;
	p1._numSides = 0;
}
// the circumference of the polygon
uint Polygon:: perimeter()const {
	uint sum = 0;
	for (uint i = 0; i < _numSides; i++)
		sum += _sides[i];

	return sum;
}
//operators overloading
bool Polygon:: operator == (const Polygon& p1) {
	uint sum1 = perimeter();
	uint sum2 = p1.perimeter();
	if (_numSides == p1._numSides && sum1 == sum2)
		return true;
	else
		return false;
}