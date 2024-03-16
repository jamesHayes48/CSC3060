#pragma once
#ifndef ROOM_DIMENSION_H
#define ROOM_DIMENSTION_H

#include "FeetInches.h"

class RoomDimension {

private:
	FeetInches length;
	FeetInches width;
	FeetInches area;
public:
	// Default Constructor
	RoomDimension() {

	}
	// Constructor
	RoomDimension(FeetInches len, FeetInches w) {
		length = len;
		width = w;
		area = len.multiply(w);
	}
	// Copy Constructor
	RoomDimension(const RoomDimension& obj) {
		length = obj.length;
		width = obj.width;
		area = obj.area;
	}


	// getArea function
	FeetInches getArea() {
		return area;
	}
};
#endif