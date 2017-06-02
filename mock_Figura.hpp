#pragma once 
#include "Figury.hpp"
#include <gmock/gmock.h> 


class MockFigura: Figura
{
	
	MOCK_METHOD0(Obwod, double());
	MOCK_METHOD1(Pole,  double());
};


