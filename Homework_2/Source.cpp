#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int tn = 0;

start:

	printf("enter index number of the square:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		for (int i = 0; i < 10; i++)
		{
			for (int j = 10; j > 0; j--)
			{
				if (i == 0 && (j < 10 && j>1)) cout << "*";
				if (i < j) cout << " ";
				else cout << " *";
				if (j == 10) cout << "*";

				if (j == 1) cout << endl;
			}
		}
		cout << endl;
	}
	break;
	case 2:
	{

	}
	break;
	case 3:
	{

	}
	break;
	case 4:
	{

	}
	break;
	case 5:
	{

	}
	break;
	case 6:
	{

	}
	break;
	case 7:
	{

	}
	break;
	case 8:
	{

	}
	break;
	case 9:
	{

	}
	break;
	case 10:
	{

	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}