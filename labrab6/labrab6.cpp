#include <iostream>

#include <queue>

#include <map>
#include <string>

#include <algorithm>
#include <vector>

struct Person {
	std::string name;
	int age;

	Person(const std::string& _name, int _age) : name(_name), age(_age) {}
	Person() {}
};

int main()
{
	std::cout << std::endl << "Программа #1" << std::endl << std::endl;

	// Создание и заполнение первого контейнера типа queue<int>
	std::queue<int> firstQueue;
	firstQueue.push(10);
	firstQueue.push(20);
	firstQueue.push(30);

	// Просмотр первого контейнера
	std::cout << "Первый контейнер (queue): ";
	std::queue<int> tempQueue = firstQueue;
	while (!tempQueue.empty()) {
		std::cout << tempQueue.front() << " ";
		tempQueue.pop();
	}
	std::cout << std::endl;

	// Изменение первого контейнера, удаляя один элемент и добавляя другой
	firstQueue.push(40); // Добавляем элемент 40
	firstQueue.pop();    // Удаляем первый элемент

	// Просмотр первого контейнера с использованием итератора
	std::cout << "Первый контейнер после изменения: ";
	tempQueue = firstQueue;  // Создаем временную копию первого контейнера
	while (!tempQueue.empty()) {
		std::cout << tempQueue.front() << " ";
		tempQueue.pop();
	}
	std::cout << std::endl;

	// Создание и заполнение второго контейнера типа map<int, int>
	std::map<int, int> secondMap;
	secondMap[1] = 100;
	secondMap[2] = 200;
	secondMap[3] = 300;

	// Изменение первого контейнера, удаляя n элементов и добавляя все элементы из второго контейнера
	int n = 2; // Заданный элемент
	while (!firstQueue.empty() && n > 0) {
		firstQueue.pop();
		n--;
	}
	for (const auto& pair : secondMap) {
		firstQueue.push(pair.second);
	}

	// Просмотр первого контейнера после изменения
	std::cout << "Первый контейнер после изменения и добавления элементов из второго контейнера: ";
	tempQueue = firstQueue; // Обновляем временную копию первого контейнера
	while (!tempQueue.empty()) {
		std::cout << tempQueue.front() << " ";
		tempQueue.pop();
	}
	std::cout << std::endl;

	// Просмотр второго контейнера типа map
	std::cout << "Второй контейнер (map): ";
	for (const auto& pair : secondMap) {
		std::cout << pair.second << " ";
	}
	std::cout << std::endl;


	std::cout << std::endl << "Программа #2" << std::endl << std::endl;

	std::queue<Person> firstQueue2;
	firstQueue2.push(Person("Alice", 25));
	firstQueue2.push(Person("Bob", 30));
	firstQueue2.push(Person("Charlie", 35));

	// Просмотр первого контейнера
	std::cout << "Первый контейнер (queue): \n";
	std::queue<Person> tempQueue2 = firstQueue2;
	while (!tempQueue2.empty()) {
		Person person = tempQueue2.front();
		std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
		tempQueue2.pop();
	}

	// Изменение первого контейнера, удаляя один элемент и добавляя другой
	firstQueue2.push(Person("Dave", 40)); // Добавляем новый элемент
	firstQueue2.pop(); // Удаляем первый элемент

	// Просмотр первого контейнера с использованием итератора
	std::cout << "Первый контейнер после изменения: \n";
	tempQueue2 = firstQueue2; // Создаем временную копию первого контейнера
	while (!tempQueue2.empty()) {
		Person person = tempQueue2.front();
		std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
		tempQueue2.pop();
	}

	// Создание и заполнение второго контейнера типа map<int, Person>
	std::map<int, Person> secondMap2;
	secondMap2[1] = Person("Eve", 45);
	secondMap2[2] = Person("Frank", 50);
	secondMap2[3] = Person("Grace", 55);

	// Изменение первого контейнера, удаляя n элементов и добавляя все элементы из второго контейнера
	n = 1;
	while (!firstQueue2.empty() && n > 0) {
		firstQueue2.pop();
		n--;
	}
	for (const auto& pair : secondMap2) {
		firstQueue2.push(pair.second);
	}

	// Просмотр первого контейнера после изменения
	std::cout << "Первый контейнер после изменения и добавления элементов из второго контейнера: \n";
	tempQueue2 = firstQueue2; // Обновляем временную копию первого контейнера
	while (!tempQueue2.empty()) {
		Person person = tempQueue2.front();
		std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
		tempQueue2.pop();
	}

	// Просмотр второго контейнера типа map
	std::cout << "Второй контейнер (map): \n";
	for (const auto& pair : secondMap2) {
		Person person = pair.second;
		std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
	}


	std::cout << std::endl << "Программа #3" << std::endl << std::endl;

	// Шаг 1: Создание контейнера
	std::queue<int> container;

	// Заполнение контейнера элементами
	container.push(5);
	container.push(10);
	container.push(2);
	container.push(8);
	container.push(3);

	// Шаг 2: Сортировка по убыванию
	std::vector<int> sorted_container;
	while (!container.empty()) {
		sorted_container.push_back(container.front());
		container.pop();
	}
	std::sort(sorted_container.rbegin(), sorted_container.rend());

	// Шаг 3: Просмотр контейнера
	std::cout << "Контейнер: ";
	for (const auto& element : sorted_container) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	// Шаг 4: Поиск элемента, удовлетворяющего условию
	int target_element = 8;
	auto found_element = std::find(sorted_container.begin(), sorted_container.end(), target_element);

	if (found_element != sorted_container.end()) {
		std::cout << "Найден элемент: " << *found_element << std::endl;
	}
	else {
		std::cout << "Элемент не найден" << std::endl;
	}

	// Шаг 5: Перемещение элементов, удовлетворяющих условию, во второй контейнер
	std::vector<int> second_container;
	std::copy_if(sorted_container.begin(), sorted_container.end(), std::back_inserter(second_container),
		[target_element](int element) { return element == target_element; });

	// Шаг 6: Просмотр второго контейнера
	std::cout << "Второй контейнер: ";
	for (const auto& element : second_container) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	// Шаг 7: Отсортировать первый и второй контейнеры по возрастанию элементов
	std::sort(sorted_container.begin(), sorted_container.end());
	std::sort(second_container.begin(), second_container.end());

	// Шаг 8: Просмотр отсортированных контейнеров
	std::cout << "Первый контейнер (по возрастанию): ";
	for (const auto& element : sorted_container) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	std::cout << "Второй контейнер (по возрастанию): ";
	for (const auto& element : second_container) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	// Шаг 9: Получение третьего контейнера путем объединения первых двух
	std::vector<int> third_container;
	std::merge(sorted_container.begin(), sorted_container.end(),
		second_container.begin(), second_container.end(),
		std::back_inserter(third_container));

	// Шаг 10: Просмотр третьего контейнера
	std::cout << "Третий контейнер: ";
	for (const auto& element : third_container) {
		std::cout << element << " ";
	}
	std::cout << std::endl;

	// Шаг 11: Подсчет элементов, удовлетворяющих условию, в третьем контейнере
	int count = std::count_if(third_container.begin(), third_container.end(),
		[target_element](int element) { return element == target_element; });

	std::cout << "Количество элементов, удовлетворяющих условию, в третьем контейнере: " << count << std::endl;

	bool contains_element = std::find(third_container.begin(), third_container.end(), target_element) != third_container.end();
	if (contains_element) {
		std::cout << "В третьем контейнере есть элемент, удовлетворяющий условию" << std::endl;
	}
	else {
		std::cout << "В третьем контейнере нет элемента, удовлетворяющего условию" << std::endl;
	}

	return 0;
}
