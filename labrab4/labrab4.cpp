#include <iostream>
#include "List.h"
#include "Complex.h"

int main()
{
	List<int> list1;
	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);

	List<int> list2;
	list2.push_back(4);
	list2.push_back(5);

	List<int> list3 = list1 + list2;

	std::cout << "List1: ";
	for (int i = 0; i < list1.getSize(); i++) {
		std::cout << list1[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "List2: ";
	for (int i = 0; i < list2.getSize(); i++) {
		std::cout << list2[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "List3: ";
	for (int i = 0; i < list3.getSize(); i++) {
		std::cout << list3[i] << " ";
	}
	std::cout << std::endl;

	if (list1 != list1) {
		std::cout << "List1 and List1 are not equal" << std::endl;
	}
	else {
		std::cout << "List1 and List1 are equal" << std::endl;
	}
	if (list1 != list2) {
		std::cout << "List1 and List2 are not equal" << std::endl;
	}
	else {
		std::cout << "List1 and List2 are equal" << std::endl;
	}

	if (list1 != list3) {
		std::cout << "List1 and List3 are not equal" << std::endl;
	}
	else {
		std::cout << "List1 and List3 are equal" << std::endl;
	}


	List<Complex> list;
	list.push_back(Complex(1.0, 2.0));
	list.push_back(Complex(3.0, 4.0));

	List<Complex> otherList;
	otherList.push_back(Complex(5.0, 6.0));
	otherList.push_back(Complex(7.0, 8.0));

	List<Complex> combinedList = list + otherList;

	std::cout << "List: ";
	for (int i = 0; i < list.getSize(); i++) {
		std::cout << list[i].getReal() << "+" << list[i].getImaginary() << "i ";
	}
	std::cout << std::endl;

	std::cout << "Other List: ";
	for (int i = 0; i < otherList.getSize(); i++) {
		std::cout << otherList[i].getReal() << "+" << otherList[i].getImaginary() << "i ";
	}
	std::cout << std::endl;

	std::cout << "Combined List: ";
	for (int i = 0; i < combinedList.getSize(); i++) {
		std::cout << combinedList[i].getReal() << "+" << combinedList[i].getImaginary() << "i ";
	}
	std::cout << std::endl;

	if (list != otherList) {
		std::cout << "List and Other List are not equal" << std::endl;
	}
	else {
		std::cout << "List and Other List are equal" << std::endl;
	}

	return 0;
}