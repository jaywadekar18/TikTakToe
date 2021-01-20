#include <iostream>
using namespace std;
char a[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int item;
void display()
{

	cout << "\t \t\t Welcome JAY's to tic tak toe \n";
	cout << " " << a[0] << "  | " << a[1] << " |  " << a[2] << " |  " << endl;
	cout << " " << a[3] << "  | " << a[4] << " |  " << a[5] << " |  " << endl;
	cout << " " << a[6] << "  | " << a[7] << " 1|  " << a[8] << " |  " << endl;
	cout << endl;
	cout << "   Player1=[x]   " << endl;
	cout << "   Player2=[0]   " << endl;
}
void player1()
{
	cout << "Player 1 will play now";
	cin >> item;
	if ((a[item - 1] != 'X') && (a[item - 1] != '0'))
	{
		switch (item)
		{
		case 1:
			a[0] = 'X';
			break;
		case 2:
			a[1] = 'X';
			break;
		case 3:
			a[2] = 'X';
			break;
		case 4:
			a[3] = 'X';
			break;
		case 5:
			a[4] = 'X';
			break;
		case 6:
			a[5] = 'X';
			break;
		case 7:
			a[6] = 'X';
			break;
		case 8:
			a[7] = 'X';
			break;
		case 9:
			a[8] = 'X';
			break;
		default:
			cout << "enetr again";
		}
	}
	else
	{
		cout << "The value " << item << "you entered is already occupied";
		player1();
	}
}
void player2()
{
	cout << "Player 2 will play now";
	cin >> item;
	if ((a[item - 1] != 'X') && (a[item - 1] != '0'))
	{
		switch (item)
		{
		case 1:
			a[0] = '0';
			break;
		case 2:
			a[1] = '0';
			break;
		case 3:
			a[2] = '0';
			break;
		case 4:
			a[3] = '0';
			break;
		case 5:
			a[4] = '0';
			break;
		case 6:
			a[5] = '0';
			break;
		case 7:
			a[6] = '0';
			break;
		case 8:
			a[7] = '0';
			break;
		case 9:
			a[8] = '0';
			break;
		default:
			cout << "enter again";
		}
	}
	else
	{
		cout << "The value " << item << "you entered is already occupied";
		player2();
	}
}
void checkplayer1()
{
	if ((a[0] == 'X' && a[1] == 'X' && a[2] == 'X') ||
		(a[3] == 'X' && a[4] == 'X' && a[5] == 'X') ||
		(a[6] == 'X' && a[7] == 'X' && a[8] == 'X') ||
		(a[0] == 'X' && a[3] == 'X' && a[6] == 'X') ||
		(a[1] == 'X' && a[4] == 'X' && a[7] == 'X') ||
		(a[2] == 'X' && a[5] == 'X' && a[8] == 'X') ||
		(a[0] == 'X' && a[4] == 'X' && a[8] == 'X') ||
		(a[2] == 'X' && a[4] == 'X' && a[6] == 'X'))
	{
		cout << "player 1 has won";
		exit(0);
	}
}
void checkplayer2()
{
	if ((a[0] == '0' && a[1] == '0' && a[2] == '0') ||
		(a[3] == '0' && a[4] == '0' && a[5] == '0') ||
		(a[6] == '0' && a[7] == '0' && a[8] == '0') ||
		(a[0] == '0' && a[3] == '0' && a[6] == '0') ||
		(a[1] == '0' && a[4] == '0' && a[7] == '0') ||
		(a[2] == '0' && a[5] == '0' && a[8] == '0') ||
		(a[0] == '0' && a[4] == '0' && a[8] == '0') ||
		(a[2] == '0' && a[4] == '0' && a[6] == '0'))
	{
		cout << "player 2 has won";
		exit(0);
	}
}
void finalresult()
{
	cout << " \t none of you won ";
}
int main() //main
{

	display();
	player1();

	display();
	player2();

	display();
	player1();

	display();
	player2();

	display();
	player1();

	checkplayer1();

	display();
	player2();
	checkplayer2();

	display();
	player1();

	checkplayer1();

	display();
	player2();

	checkplayer2();

	display();
	player1();

	checkplayer1();

	finalresult();
	return 0;
}