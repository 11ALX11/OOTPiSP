#pragma once

template <typename T>
class List {
private:
	struct Node {
		T data;
		Node* next;

		Node(const T& value) : data(value), next(nullptr) {}
	};

	Node* head;
	Node* tail;
	int size;

public:
	List() : head(nullptr), tail(nullptr), size(0) {}

	List(const List& other) : head(nullptr), tail(nullptr), size(0) {
		Node* current = other.head;
		while (current != nullptr) {
			push_back(current->data);
			current = current->next;
		}
	}

	~List() {
		clear();
	}

	List& operator=(const List& other) {
		if (this != &other) {
			clear();
			Node* current = other.head;
			while (current != nullptr) {
				push_back(current->data);
				current = current->next;
			}
		}
		return *this;
	}

	T& operator[](int index) {
		if (index < 0 || index >= size) {
			throw std::out_of_range("Index out of range");
		}

		Node* current = head;
		for (int i = 0; i < index; i++) {
			current = current->next;
		}

		return current->data;
	}

	List operator+(const List& other) {
		List result(*this);

		Node* current = other.head;
		while (current != nullptr) {
			result.push_back(current->data);
			current = current->next;
		}

		return result;
	}

	bool operator!=(const List& other) const {
		if (size != other.size) {
			return true;
		}

		Node* current1 = head;
		Node* current2 = other.head;

		while (current1 != nullptr && current2 != nullptr) {
			if (current1->data != current2->data) {
				return true;
			}

			current1 = current1->next;
			current2 = current2->next;
		}

		return false;
	}

	void push_back(const T& value) {
		Node* newNode = new Node(value);

		if (head == nullptr) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}

		size++;
	}

	void clear() {
		Node* current = head;
		while (current != nullptr) {
			Node* next = current->next;
			delete current;
			current = next;
		}

		head = nullptr;
		tail = nullptr;
		size = 0;
	}

	int getSize() const {
		return size;
	}
};