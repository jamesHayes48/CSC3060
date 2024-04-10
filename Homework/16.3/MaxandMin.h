/*
* James Hayes
Two functions used for finding the max and min of two numbers with any data type.
Used in: 16.3.cpp
*/

#pragma once
template <typename T>
T maximum(T num1, T num2) {
	T returnVal;
	if (num1 > num2)
		returnVal = num1;
	else
		returnVal = num2;
	return returnVal;
}

template <typename T>
T minimum(T num1, T num2) {
	T returnVal;
	if (num1 < num2)
		returnVal = num1;
	else
		returnVal = num2;
	return returnVal;
}
