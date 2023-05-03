﻿#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Ship.h"

/*
 *		Ход работы:
 * 1. Определить пользовательский класс в соответствии с вариантом задания (смотри приложение).
 * 2. Определить в классе следующие конструкторы: без параметров, с параметрами, копирования.
 * 3. Определить в классе деструктор.
 * 4. Определить в классе компоненты-функции для просмотра и установки полей данных.
 * 5. Определить указатель на компоненту-функцию.
 * 6. Определить указатель на экземпляр класса.
 * 7. Написать демонстрационную программу, в которой создаются и разрушаются объекты
 *	пользовательского класса и каждый вызов конструктора и деструктора сопровождается
 *	выдачей соответствующего сообщения (какой объект какой конструктор или деструктор вызвал).
 * 8. Показать в программе использование указателя на объект и указателя на компоненту-функцию.
 */
int main()
{
	Ship* armidale_class = new Ship();

	char* new_name = new char[16];
	strcpy(new_name, "Patrol boat #1\0");

	armidale_class->setName(new_name);
	std::cout << armidale_class->getName() << std::endl
			<< armidale_class->getType() << std::endl
			<< armidale_class->getDisplacement() << std::endl;

	delete armidale_class;

	return 0;
}