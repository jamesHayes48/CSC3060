#pragma once
#ifndef ROOM_CARPET_H
#define ROOM_CARPET_H

// Headers
#include "RoomDimension.h"
#include <iostream>
using namespace std;

class RoomCarpet {
private:
	RoomDimension dimensions;
	double cost;
public:
	RoomCarpet(RoomDimension rd, double c) {
		dimensions = rd;
		cost = c;
	}
	double getTotalCost() {
		double area = dimensions.getArea();
		return area * cost;
	}
};
#endif // !ROOM_CARPET_H
