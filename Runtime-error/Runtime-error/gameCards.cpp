#include "gameCards.h"

// Prints initial card where 0 is on top
void baseCard0()
{
	cout << R"( 
 ___
| 0 |
|---|
|_1_| )";
}

// Prints initial card where 1 is on top
void baseCard1()
{
	cout << R"( 
 ___
| 1 |
|---|
|_0_| )";
}

// Prints AND card with 1 entrance for bottom pyramid
void ANDCard1Entrance()
{
	cout << R"( 
 ___
| 1 |
|AND|
|___| )";
	
}

// Prints AND card with 0 entrance for bottom pyramid
void ANDCard0Entrance()
{
	cout << R"( 
 ___
| 0 |
|AND|
|___| )";
}

// Prints AND card with 0 entrance for top pyramid
void ANDCard0Exit()
{
	cout << R"( 
 ___
|   |
|AND|
|_0_| )";
}

// Prints AND card with 1 entrance for top pyramid
void ANDCard1Exit()
{
	cout << R"( 
 ___
|   |
|AND|
|_1_| )";
	
}

// Prints OR card with 1 entrance for bottom pyramid
void ORCard1Entrance()
{
	cout << R"( 
 ___
| 1 |
| OR|
|___| )";
}

// Prints OR card with 0 entrance for bottom pyramid
void ORCard0Entrance()
{
	cout << R"( 
 ___
| 0 |
| OR|
|___| )";
}

// Prints OR card with 0 entrance for top pyramid
void ORCard0Exit()
{
	cout << R"( 
 ___
|   |
| OR|
|_0_| )";
}

// Prints OR card with 1 entrance for top pyramid
void ORCard1Exit()
{
	cout << R"( 
 ___
|   |
| OR|
|_1_| )";
}

// Prints XOR card with 1 entrance for bottom pyramid
void XORCard1Entrance()
{
	cout << R"( 
 ___
| 1 |
|XOR|
|___| )";
}

// Prints XOR card with 0 entrance for bottom pyramid
void XORCard0Entrance()
{
	cout << R"( 
 ___
| 0 |
|XOR|
|___| )";
}

// Prints XOR card with 0 entrance for top pyramid
void XORCard0Exit()
{
	cout << R"( 
 ___
|   |
|XOR|
|_0_| )";
}

// Prints XOR card with 1 entrance for top pyramid
void XORCard1Exit()
{
	cout << R"( 
 ___
|   |
|XOR|
|_1_| )";
}

//  Adds spacing between cards
void space()
{
	cout << "		";
}

//  Calling everything together
void levelOne()
{
	baseCard1();
	space();
	baseCard0();
	space();
	baseCard1();
	space();
	XORCard0Entrance();
}