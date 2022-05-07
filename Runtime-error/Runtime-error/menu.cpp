#include "menu.h"

void menu()
{
	string menuButtons[3] = {"Play", "Rules", "Quit"};
	int menuIndex = 0;

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

	while (true)
	{
		if (_kbhit())
		{
			switch (_getch())
			{
				case 'W':
				case 'w':
				case 72:
						if (menuIndex <= 0)
						{
							menuIndex = 2;
						}
						else
						{
							menuIndex--;
						}
						break;
				case 'S':
				case 's':
				case 80:
						if (menuIndex >= 2)
						{
							menuIndex = 0;
						}
						else
						{
							menuIndex++;
						}
						break;
			}

			system("cls");

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
	}
}