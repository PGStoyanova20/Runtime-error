#include "menu.h"

void visualiseMenu(string menuButtons[])
{
	for (size_t i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			cout << menuButtons[i] << " <" << endl;
		}
		else
		{
			cout << menuButtons[i] << endl;
		}
	}
}

void moveUp(int &menuIndex)
{
	if (menuIndex <= 0)
	{
		menuIndex = 2;
	}
	else
	{
		menuIndex--;
	}
}

void moveDown(int &menuIndex)
{
	if (menuIndex >= 2)
	{
		menuIndex = 0;
	}
	else
	{
		menuIndex++;
	}
}

void navigation(int &menuIndex, bool &optionCheck)
{
	switch (_getch())
	{
	case 'W':
	case 'w':
	case 72:
		moveUp(menuIndex);
		break;
	case 'S':
	case 's':
	case 80:
		moveDown(menuIndex);
		break;
	case 13:
		optionCheck = 1;
		break;
	}
}
void pickedOption(int &menuIndex, bool &exitGame)
{
	switch (menuIndex)
	{
	case 0:
		pickGamemode();
		break;
	case 1:
	case 2:
		exitGame = 1;
		break;
	}
}

void selectedButton(string menuButtons[], int &menuIndex)
{
	for (size_t i = 0; i < 3; i++)
	{
		if (i == menuIndex)
		{
			cout << menuButtons[i] << " <" << endl;
		}
		else
		{
			cout << menuButtons[i] << endl;
		}
	}
}

void menu()
{
	string menuButtons[3] = {"Play", "Rules", "Quit"};
	int menuIndex = 0;
	bool exitGame = 0, optionCheck = 0;

	visualiseMenu(menuButtons);

	while (!exitGame)
	{
		if (_kbhit())
		{
			system("cls");

			navigation(menuIndex, optionCheck);

			if (!optionCheck)
			{
				selectedButton(menuButtons, menuIndex);
			}
			else
			{	
				pickedOption(menuIndex, exitGame);
			}
		}
	}
}