#pragma once
#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include "string.h"

// Вариант #15
// КОРАБЛЬ
//	имя – char*
//	водоизмещение – int
//	тип – char*
class Ship {

protected:

	char* name;
	int displacement;
	char* type;

public:

	// Имя класса
	std::string className();

	// Конструкторы

	Ship(); // По умолчанию
	Ship(char* name, char* type, int displacement = 0); // С параметрами
	Ship(const Ship& original); // Конструктор копирования

	// Деструктор
	~Ship();

	// Сеттеры
	void setName(char* name);
	void setType(char* type);
	void setDisplacement(int displacement);

	// Геттеры
	char* getName();
	char* getType();
	int getDisplacement();
};

