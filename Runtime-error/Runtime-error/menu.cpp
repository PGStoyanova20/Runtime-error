#include "menu.h"

// First output of the possible gamemodes
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

//  The player can move upwards
void moveUp(int &menuIndex)
{
	// Puts a limit to how much the player can go up
	if (menuIndex <= 0)
	{
		menuIndex = 2;
	}
	else
	{
		menuIndex--;
	}
}

//  The player can move downwards
void moveDown(int &menuIndex)
{
	// Puts a limit to how much the player can go down
	if (menuIndex >= 2)
	{
		menuIndex = 0;
	}
	else
	{
		menuIndex++;
	}
}

// Navigation system so the player can move through the menu
void navigation(int &menuIndex, bool &optionCheck)
{
	switch (_getch())
	{
	// With "W/w" or arrow key for upwards the player moves up
	case 'W':
	case 'w':
	case 72:
		moveUp(menuIndex);
		break;
	// With "S/s" or arrow key for downwards the player moves up
	case 'S':
	case 's':
	case 80:
		moveDown(menuIndex);
		break;
	//  Enter to pick an option
	case 13:
		optionCheck = 1;
		break;
	}
}

//  After picking any of the options
void pickedOption(int &menuIndex, bool &exitGame)
{
	switch (menuIndex)
	{
	// Play
	case 0:
		pickGamemode();
		break;
	// Rules
	case 1:
	// Quit
	case 2:
		exitGame = 1;
		break;
	}
}

// Prints " <" to show what option is selected
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

//  Calling everything together
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

			// Checks if the player has picked an option
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