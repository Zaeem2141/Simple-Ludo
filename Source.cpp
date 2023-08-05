//                               ludo guessing higher number game
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	char choice ;
	long a=0,x,z, acc = 0, inves = 0, rem = 0, comp = 0,y=0,r=0,nex=0,depo=0,flag=1;
	
	string name, bank,t;
	cout << "\t\t\t\t" << (char)3 << "Welcome IN a Dice Rolling Game" << (char)3 << endl << endl;
	cout << "Enter your Name " << endl;
	getline(cin, name);
	cout << endl << "Enter your Bank Name " << endl;
	getline(cin, bank);
	cout<<endl << "Enter your total account Balance " << endl;
	cin >> acc;
	long acc1 = acc;
	comp = acc * 5;
	
	do
	{
		system("CLS");
		y = 0; r = 0;
	cout << "\t\t\t\t\t" << (char)3 << "Lets Start OUR Game " << (char)3 << endl << endl;
	cout << "How Much Do you want to Invest " << endl;
	cin >> inves;
	while (inves > 5000)
	{
		cout << "You Can't Bet More Than 5000 " << endl;
		cout << "\t\t Kindly enter amount again " << endl;
		cin >> inves;
	}
	if (flag && depo<=0)
	{
		rem = acc - inves;
	}
	cout << "\t\t\t\t Lets roll dice " << endl << endl;
	while (y < 3)
	{
		cout << "Press 'a' key to roll your dice " << endl;
		cin >> choice;
		while (choice != 'a')
		{
			cout << "Kindly Press 'a' key " << endl;
			cin >> choice;
		}
		if (choice == 'a')
		{
			z = 1 + rand() % 6;
			x = 1 + rand() % 6;
			cout << name << " your roll is : " << z << endl;
			cout << "computer roll : " << x << endl;
		}
		if (z > x)
		{
			cout << name << " you wins !!" << endl;
			y++;
			r++;
		}
		else if (z == x)
		{
			cout << "Oops! It's draw !" << endl;
		}
		else
		{
			cout << "computer wins !!" << endl;
			y++;
		}
		
	}
	if (r >= 2)
	{
		cout <<"\t\t" << name << " Congrats!You win the whole game " << endl;
		cout << "You won " << inves * 2 << " which is in your deposit " << endl;
		cout << "you have " << inves * 2 << " in your deposit now" << endl;
		depo += inves;
		comp = comp - inves;
		a++;
		flag = 0;
		rem = acc1;
	}
	else
	{
		cout <<endl<< "\t\t\tComputer won !!!! " << endl<<endl;
		cout << "Computer your  complete profit  becomes : " << comp + inves<<endl<<endl;
		depo -= inves;
		if (depo <= 0)
		{
			flag = 1;
		}
		nex = acc - inves;
		cout << name << "Your balance become : " << rem << endl<<endl;
	}
	cout << endl << endl << "Do you wanna continue " << endl;
	cin >> t;
	if (t == "quit")
	{
		nex = rem + depo;
		cout << "you wins " << a << " times " << endl;
		cout << " Your total Balance was : " << acc << endl;
		cout << "Your current Balance is : " << nex << endl;

	}
	else if(r<2)
	{
		acc = acc - inves;
	}
}
	while (t == "y" || t == "Y");
}