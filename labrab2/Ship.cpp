#include "Ship.h"
#include <iostream>
#include <string>
#include <list>

std::list<Ship*> Ship::ship_list;

void Ship::logShipList() {
	for (Ship* ship : Ship::ship_list) {
		std::cout << ship->getClass() << ": " << ship->getShipName() << std::endl;
	}
}

void Ship::addToShipList() {
	Ship::ship_list.push_back(this);
}

std::string Ship::getShipName() {
	return this->ship_name;
}

void Ship::setShipName(std::string ship_name) {
	this->ship_name = ship_name;
}

Ship::Ship() {
	Ship::ship_list.push_back(this);
}

Ship::~Ship() {
	delete& (this->ship_name);
}
