#include "Ship.h"

std::string Ship::className() {
	return "Ship";
}

// Конструкторы

Ship::Ship() {
	this->name = new char[10];
	strcpy(this->name, "New ship\0");
	this->type = new char[10];
	strcpy(this->type, "Armidale\0"); // Armidale class
	this->displacement = 300;

	std::cout << "Вызван конструктор по умолчанию класса " << this->className() << std::endl;
}

Ship::Ship(char* name, char* type, int displacement) {
	this->name = new char[strlen(name)];
	strcpy(this->name, name);
	this->type = new char[strlen(type)];
	strcpy(this->type, type);
	this->displacement = displacement;

	std::cout << "Вызван конструктор с параметрами класса " << this->className() << std::endl;
}

Ship::Ship(const Ship& original) {
	this->name = new char[strlen(original.name)];
	strcpy(this->name, original.name);
	this->type = new char[strlen(original.type)];
	strcpy(this->type, original.type);
	this->displacement = original.displacement;

	std::cout << "Вызван конструктор копирования класса " << this->className() << std::endl;
}

// Деструктор
Ship::~Ship() {
	delete[] this->name;
	delete[] this->type;

	std::cout << "Вызван деструктор класса " << this->className() << std::endl;
}

// Сеттеры
void Ship::setName(char* name) {
	this->name = new char[strlen(name)];
	strcpy(this->name, name);
}
void Ship::setType(char* type) {
	this->type = new char[strlen(type)];
	strcpy(this->type, type);
}
void Ship::setDisplacement(int displacement) {
	this->displacement = displacement;
}

// Геттеры
char* Ship::getName() {
	char* tmp = new char[strlen(this->name)];
	strcpy(tmp, this->name);
	return tmp;
}
char* Ship::getType() {
	char* tmp = new char[strlen(this->type)];
	strcpy(tmp, this->type);
	return tmp;
}
int Ship::getDisplacement() {
	return this->displacement;
}