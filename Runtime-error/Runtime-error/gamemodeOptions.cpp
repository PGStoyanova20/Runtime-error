#include "gamemodeOptions.h"

using namespace std;

// First output of the possible gamemodes
void showGamemodeOptions(string menuButtons[])
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

//  After picking any of the options
void pickedGameOption(int& menuIndex, bool& exitGame)
{
	switch (menuIndex)
	{
	//  Player VS Player
	case 0:
		levelOne();
		break;
	//  Player VS Computer
	case 1:
	// Back
	case 2:
		menu();
		break;
	}
}

// Prints " <" to show what option is selected
void selectedGameOption(string menuButtons[], int& menuIndex)
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
void pickGamemode()
{
	string menuButtons[3] = { "Player VS Player", "Player VS Computer", "Back" };
	int menuIndex = 0;
	bool back = 0, optionCheck = 0;

	showGamemodeOptions(menuButtons);

	while (!back)
	{
		if (_kbhit())
		{
			system("cls");

			// Navigation system so the player can move through the menu
			navigation(menuIndex, optionCheck);

			// Checks if the player has picked an option
			if (!optionCheck)
			{
				selectedGameOption(menuButtons, menuIndex);
			}
			else
			{
				pickedGameOption(menuIndex, back);
			}
		}
	}
}