#include "gamemodeOptions.h"

using namespace std;

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
void pickedGameOption(int& menuIndex, bool& exitGame)
{
	switch (menuIndex)
	{
	case 0:
		break;
	case 1:
	case 2:
		menu();
		break;
	}
}

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
void pickGamemode()
{
	string menuButtons[3] = { "Player VS Player", "Player VS Computer", "Back" };
	int menuIndex = 0;
	bool exitGame = 0, optionCheck = 0;

	showGamemodeOptions(menuButtons);

	while (!exitGame)
	{
		if (_kbhit())
		{
			system("cls");

			navigation(menuIndex, optionCheck);

			if (!optionCheck)
			{
				selectedGameOption(menuButtons, menuIndex);
			}
			else
			{
				pickedGameOption(menuIndex, exitGame);
			}
		}
	}
}