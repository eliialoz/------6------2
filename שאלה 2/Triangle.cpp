/*
File: mytypes.h
Description:
Course: 150018 C++ Workshop, Exercise 6, Question 2
Author: Dan Zilberstein
Students: eli ialoz 311201354
		& avishay farkash 205918790
*/
#include"Triangle.h"
//Constructor
Triangle::Triangle(uint s1, uint s2, uint s3) {
	_numSides = 3;
	_sides = new uint[_numSides];
	_sides[0] = s1;
	_sides[1] = s2;
	_sides[2] = s3;
}