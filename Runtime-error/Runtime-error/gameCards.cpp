#include "gameCards.h"

void baseCard0()
{
	cout << R"( 
 ___
| 0 |
|---|
|_1_| )";
}

void baseCard1()
{
	cout << R"( 
 ___
| 1 |
|---|
|_0_| )";
}

void ANDCard1Entrance()
{
	cout << R"( 
 ___
| 1 |
|AND|
|___| )";
	
}
void ANDCard0Entrance()
{
	cout << R"( 
 ___
| 0 |
|AND|
|___| )";
}
void ANDCard0Exit()
{
	cout << R"( 
 ___
|   |
|AND|
|_0_| )";
}
void ANDCard1Exit()
{
	cout << R"( 
 ___
|   |
|AND|
|_1_| )";
	
}
void ORCard1Entrance()
{
	cout << R"( 
 ___
| 1 |
| OR|
|___| )";
}
void ORCard0Entrance()
{
	cout << R"( 
 ___
| 0 |
| OR|
|___| )";
}
void ORCard0Exit()
{
	cout << R"( 
 ___
|   |
| OR|
|_0_| )";
}
void ORCard1Exit()
{
	cout << R"( 
 ___
|   |
| OR|
|_1_| )";
}
void XORCard1Entrance()
{
	cout << R"( 
 ___
| 1 |
|XOR|
|___| )";
}
void XORCard0Entrance()
{
	cout << R"( 
 ___
| 0 |
|XOR|
|___| )";
}
void XORCard0Exit()
{
	cout << R"( 
 ___
|   |
|XOR|
|_0_| )";
}
void XORCard1Exit()
{
	cout << R"( 
 ___
|   |
|XOR|
|_1_| )";
}

void space()
{
	cout << "		";
}

void LevelOne()
{
	baseCard1();
	space();
	baseCard0();
	space();
	baseCard1();
	space();
	XORCard0Entrance();
}