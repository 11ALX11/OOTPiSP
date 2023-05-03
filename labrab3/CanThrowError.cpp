#include "CanThrowError.h"

void CanThrowError::throwTestError() {
	throw TestError();
}

CanThrowError::~CanThrowError() {
	std::cout << "Destructor called.\n";
}