/*
File: mytypes.h
Description:
Course: 150018 C++ Workshop, Exercise 6, Question 2
Author: Dan Zilberstein
Students: eli ialoz 311201354
		& avishay farkash 205918790
*/
#include"Rectangle.h"
//Constructor
Rectangle::Rectangle(uint s1, uint s2) {
	_numSides = 4;
	_sides = new uint[_numSides];
	for (uint i = 0; i < _numSides; i += 2) {
		_sides[i] = s1;
		_sides[i + 1] = s2;
	}
}