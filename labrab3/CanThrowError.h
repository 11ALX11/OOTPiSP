#pragma once

#include <iostream>
#include "TestError.h"

// Has a throwTestError method.
// Also, when destructor called, log it in cout.
class CanThrowError
{
public:
	void throwTestError();

	~CanThrowError();
};

