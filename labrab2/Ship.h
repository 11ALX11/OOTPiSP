#pragma once

#include <list>
#include <string>

// (*) Abstract class
class Ship
{
protected:
	static std::list<Ship*> ship_list;

	std::string ship_name = "A boat";

public:
	// Просмотр (логирование в консоль) списка
	static void logShipList();
	// Добавить в список корабль
	void addToShipList();

	// Этот метод будет менятся для потомков
	// Чистый виртуальный метод
	virtual std::string getClass() = 0;

	// Эти методы не будут меняться
	std::string getShipName();
	void setShipName(std::string ship_name);

	// Конструкторы
	Ship();

	// Деструктор
	virtual ~Ship();
};
