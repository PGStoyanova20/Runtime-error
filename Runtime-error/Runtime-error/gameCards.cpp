#include <iostream>

using namespace std;

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
	cout << " ___" << endl;
	cout << "| 1 |" << endl;
	cout << "|AND|" << endl;
	cout << "|___|" << endl;
}
void ANDCard0Entrance()
{
	cout << " ___" << endl;
	cout << "| 0 |" << endl;
	cout << "|AND|" << endl;
	cout << "|___|" << endl;
}
void ANDCard0Exit()
{
	cout << " ___" << endl;
	cout << "|   |" << endl;
	cout << "|AND|" << endl;
	cout << "|_0_|" << endl;
}
void ANDCard1Exit()
{
	cout << " ___" << endl;
	cout << "|   |" << endl;
	cout << "|AND|" << endl;
	cout << "|_1_|" << endl;
}
void ORCard1Entrance()
{
	cout << " ___" << endl;
	cout << "| 1 |" << endl;
	cout << "|OR |" << endl;
	cout << "|___|" << endl;
}
void ORCard0Entrance()
{
	cout << " ___" << endl;
	cout << "| 0 |" << endl;
	cout << "|OR |" << endl;
	cout << "|___|" << endl;
}
void ORCard0Exit()
{
	cout << " ___" << endl;
	cout << "|   |" << endl;
	cout << "|OR |" << endl;
	cout << "|_0_|" << endl;
}
void ORCard1Exit()
{
	cout << " ___" << endl;
	cout << "|   |" << endl;
	cout << "|OR |" << endl;
	cout << "|_1_|" << endl;
}
void XORCard1Entrance()
{
	cout << " ___" << endl;
	cout << "| 1 |" << endl;
	cout << "|XOR|" << endl;
	cout << "|___|" << endl;
}
void XORCard0Entrance()
{
	cout << " ___" << endl;
	cout << "| 0 |" << endl;
	cout << "|XOR|" << endl;
	cout << "|___|" << endl;
}
void XORCard0Exit()
{
	cout << " ___" << endl;
	cout << "|   |" << endl;
	cout << "|XOR|" << endl;
	cout << "|_0_|" << endl;
}
void XORCard1Exit()
{
	cout << " ___" << endl;
	cout << "|   |" << endl;
	cout << "|XOR|" << endl;
	cout << "|_1_|" << endl;
}
int main()
{

}