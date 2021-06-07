// Project Introduction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void login();
void term_dates();
void events();
void contact();
void admin_login();
int main()
{
	int selection;
	bool done = false;

	do
	{
		cout << "\n       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "\n\t\t\tSymonds Street Secondary School\n";
		cout << "\n       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "\n\n\tSymonds School is New Zealand's largest specialist creative and\n\ttechnology college.We've been fuelling the creative and \n\ttechnology industries for over 30 years with talented Animators,\n\tFilmmakers, Designers, Techies, and Game Developers.";
		cout << "\n\n\tWelcome to the Home Page\n\tPlease pick an option for more details.\n\n";
		cout << "\n\t1. Registration & Login.";
		cout << "\n\t2. Contact Details.";
		cout << "\n\t3. Term Dates.";
		cout << "\n\t4. Latest & Upcoming Events.";
		cout << "\n\t5. Exit.";
		cout << "\n\t6. Admin Login.";
		cout << "\n\n       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "\n\tPlease enter choice : ";
		cin >> selection;


		switch (selection)
		{
		case 1: login();
			break;
		case 2: contact();
			break;
		case 3: term_dates();
			break;
		case 4: events();
			break;
		case 5: cout << "\n\tThank you for visiting Symonds Street Secondary School website.";
				cout << "\n\tHope to see you soon!\n";
				cout << "\n       ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
				done = true;
			break;
		case 6: admin_login();
			break;
		default: cout << "\n\tI'm sorry please enter a correct option.\n";
			break;
		}
	} while (!done);
	return 0;
}

void term_dates()
{

	cout << "\n      **********************************************************      ";
	cout << "\n\n\t\tTerm Dates Page";
	cout << "\n\n\tFor the school year of 2021 the term dates are as follow : ";
	cout << "\n\tTerm 1 : 9th of Febuary - 16th of April.";
	cout << "\n\tTerm 1 Public Holidays : 8th of Febuary, 2nd of April, 5th of April, 6th of April.";
	cout << "\n\tTerm 1 School Holidays : 17 of April - 2nd of May.";
	cout << "\n\n\tTerm 2 : 3rd of May - 9th of July.";
	cout << "\n\tTerm 2 Public Holidays : 7th of June.";
	cout << "\n\tTerm 2 School Holidays : 10 of July - 25 of July.";
	cout << "\n\n\tTerm 3 : 26th of July - 1st of October.";
	cout << "\n\tTerm 3 Public Holidays : None.";
	cout << "\n\tTerm 3 School Holidays : 2nd of October - 17th of October.";
	cout << "\n\n\tTerm 4 : 18th of October - 10th of December.";
	cout << "\n\tTerm 4 Public Holidays : None.";
	cout << "\n\tTerm 4 School Holidays : 11th of December - 9th of Febuary 2022.";
	cout << "\n\n      **********************************************************      \n\n";
	system("pause");
}

void events()
{
	cout << "\n      -------------------------------------------------------      ";
	cout << "\n\n\t\tLatest & Upcoming Events Page";
	cout << "\n\n\tThe Latest events for the month of March : ";
	cout << "\n\t - Athletics Day : 11th of March.";
	cout << "\n\t - Swimming Gala : 18th of Mrach.";
	cout << "\n\t - Music Night : 22nd of March.";
	cout << "\n\t - Dance Night : 29th of March.";
	cout << "\n\n\tUpcoming events in April : ";
	cout << "\n\t - Rowing Day : 1st of April.";
	cout << "\n\t - Maths Quizathon : 7th of April.";
	cout << "\n\t - Art Exhibition : 14th of April.";
	cout << "\n\n\tUpcoming Events in May : ";
	cout << "\n\t - Camp Weekend : 7th of May - 9th of May.";
	cout << "\n\t - Build a robot competition : 13th of May.";
	cout << "\n\n\tUpcoming Events in June : ";
	cout << "\n\t - Televised First XV Rugby Match : 12th of June.";
	cout << "\n\t - Charity Event : 16th of June.";
	cout << "\n\t - Marathon Run for Kids : 22nd of June.";
	cout << "\n\n      -------------------------------------------------------      \n\n";
	system("pause");
}

void contact()
{
	cout << "\n      >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>      ";
	cout << "\n\n\t\tContact Us Page";
	cout << "\n\tHere is our contact details.";
	cout << "\n\tYou can call Symonds Street Secondary School at 0800 66 55 44 for free.";
	cout << "\n\tAuckland Campus : ";
	cout << "\n\tAuckland City Road";
	cout << "\n\tLevel 4,3 City Road, Grafton";
	cout << "\n\tAuckland 1010.";
	cout << "\n\tEmail : Symonds@symonds.com";
	cout << "\n\n      <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<      \n\n";
	system("pause");
}

void login()
{
	int login_selection;
	bool login_done = false;

	do
	{

		cout << "\n      +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++";
		cout << "\n\n\t\tLogin Screen";
		cout << "\n\t1. New Teacher Sign Up.";
		cout << "\n\t2. New Parent Sign up.";
		cout << "\n\t3. Teacher Sign In.";
		cout << "\n\t4. Parent Sign In.";
		cout << "\n\t5. Return to Home Page.";
		cout << "\n\n      +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
		cout << "\n\tPlease enter choice : ";
		cin >> login_selection;

		switch (login_selection)
		{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5: login_done = true;
			break;
		default: cout << "\n\tPlease enter correct option.\n";
			break;
		}
	} while (!login_done);
}

void admin_login()
{
	int admin_selection;
	bool admin_done = false;

	do
	{
		cout << "\n      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "\n\n\t\tAdmin Login Screen";
		cout << "\n\t1. Admin Login.";
		cout << "\n\t2. Return to Home Page.";
		cout << "\n\n      %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
		cout << "\n\n\tPlease Enter Choice : ";
		cin >> admin_selection;
		switch (admin_selection)
		{
		case 1:
			break;
		case 2: admin_done = true;
			break;
		default: cout << "\n\tPlease Enter Correct Option.\n";
			break;
		}
	} while (!admin_done);
}