#include "target.h"

target::target() {
	size 		= 0;
	location 	= 0;
}



void target::setSize(int input) {
	size = input;
}



int target::getSize() {
	return size;
}



void target::setLocation(int input) {
	location = input;
}



int target::getLocation() {
	return location;
}