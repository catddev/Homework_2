#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	printf("enter index number of the square:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		for (int i = 0; i <= 10; i++)
		{
			for (int j = 0; j <= 10; j++)
			{
				if (j > i) cout << "*";
				else cout << " ";
				if (j == 10) cout << endl;
			}
		}
		cout << endl;
	}
	break;
	case 2:
	{
		for (int i = 0; i <= 10; i++)
		{
			for (int j = 10; j >= 0; j--)
			{
				if (j < i) cout << "*";
				if (j == 0) cout << endl;
			}
		}
		cout << endl;
	}
	break;
	case 3:
	{
		int i = 1;
		int j = 1;
		int a = 10;

		while (i <= 9)
		{
			i++;

			while (j <= 11)
			{
				j++;
				if (i <= 6)
				{
					if ((j <= a && j >= i))
						cout << "*";
					else
						cout << " ";
				}
				else
					cout << " ";
			}

			if (i > 5)
				a++;
			else a--;

			cout << endl;

			j = 1;

		}
		cout << endl;
	}
	break;
	case 4:
	{
		int i = 1;
		int j = 1;
		int a = 10;
		int b = 6;

		while (i <= 9)
		{
			i++;
			while (j <= 10)
			{
				j++;
				if (i >= 6)
				{
					if ((j <= a && j >= i) || (j >= b && j <= i))
						cout << "*";
					else
						cout << " ";
				}
			}
			if (i > 5)
				b--;
			else
				a--;

			cout << endl;
			j = 1;
		}
		cout << endl;
	}
	break;
	case 5:
	{
		int i = 1;
		int j = 1;
		int a = 10;
		int b = 6;

		while (i <= 9)
		{
			i++;
			while (j <= 10)
			{
				j++;
				if ((j <= a && j >= i) || (j >= b && j <= i))
					cout << "*";
				else
					cout << " ";
			}
			if (i > 5)
				b--;
			else
				a--;

			cout << endl;
			j = 1;
		}
		cout << endl;
	}
	break;
	case 6:
	{
		int	i = 1;
		int j = 1;
		int a = 10;
		int	b = 6;

		while (i <= 9)
		{
			i++;
			while (j <= 9)
			{
				j++;
				if ((j <= a && j >= i) || (j >= b && j <= i))
					cout << " ";
				else
					cout << "*";
			}

			if (i > 5)
				b--;
			else
				a--;

			cout << endl;
			j = 1;
		}
		cout << endl;
	}
	break;
	case 7:
	{
		for (int i = 0; i <= 10; i++)
		{
			for (int a = 10; a >= 0; a--)
			{
				if (i <= (a - 1) && i > (10 - a)) cout << "*";
				else if (i == (10 - a)) cout << "*" << endl;
			}
		}
		cout << endl;
	}
	break;
	case 8:
	{
		for (int i = 0; i <= 10; i++)
		{
			for (int a = 0; a <=12; a++)
			{
				if (i >= (12 - a) && i < (a - 1)) cout << "*";
				else cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case 9:
	{
		for (int i = 0; i <= 10; i++)
		{
			for (int j = 10; j >= 0; j--)
			{

				if (i < j) cout << "*";
				if (j == 0) cout << endl;
			}
		}
		cout << endl;
	}
	break;
	case 10:
	{
		for (int i = 0; i <= 10; i++)
		{
			for (int j = 10; j >= 0; j--)
			{

				if (i < j) cout << " ";
				else cout << "*";
				if (j == 0) cout << endl;
			}
		}
		cout << endl;
	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}