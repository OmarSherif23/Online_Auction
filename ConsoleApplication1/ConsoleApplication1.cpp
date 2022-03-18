#include <iostream>
#include <string>
using namespace std;
int x;
int i;
int e;
int rankk;
int item_number;
int w[25];
int a[25];
int po;
int y[10];
int buyy = 0;
string  email[25];
string password[25];
string name[25];
int pay;
int gh[25];
string fg;
string kl;
int id[25];
string item_owner[25];
string categoryy[25], start_date[25], end_date[25];
int cost[25];
int point[25];
string v;
int u[25];
struct reg {
	string adress[25];
	int number[25];
};
void registar();
void add_Item();
void market_place();
void pay_Item();
void buy_item();
void status();
void rating();
void mempers();
void search();
void suggest();
void chat();
void accept1();
void accept2();
void top_Category();
void login()
{
	reg s;
	string mail, pass;
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "Enter your e-mail : ";
	cin >> mail;
	cout << "Enter your password : ";
	cin >> pass;
	for (i = 0; i < 25; i++)
	{
		if (mail == email[i] && pass == password[i])
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Your login is successfuled ... " << endl;
			v = name[i];
			break;
		}
	}
	if (i == 25)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong in your e-mail or password  Please press enter and try again." << endl;
		cin.get();
		cin.get();
		login();
	}
}
int main()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "1. Register." << endl;
	cout << "2. Log in." << endl;
	cout << "3- Exit." << endl;
	cout << "Enter your Choice : ";
	int chh;
	cin >> chh;
	if (chh == 1) {
		registar();
	}
	else if (chh == 2)
	{
		login();
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		market_place();
		cout << "1- Sell item." << endl;
		cout << "2- Buy item." << endl;
		cout << "3- Points List" << endl;
		cout << "4- Search about item." << endl;
		cout << "5- My message." << endl;
		cout << "6- Top category." << endl;
		cout << "7 Log out." << endl;
		cout << "Enter your choice : ";
		int choice;
		cin >> choice;
		if (choice == 1) {
			add_Item();
		}
		else if (choice == 2) {
			pay_Item();
		}
		else if (choice == 3) {
			mempers();
		}
		else if (choice == 4) {
			search();
		}
		else if (choice == 5) {
			chat();
		}
		else if (choice == 6) {
			top_Category();
		}
		else if (choice == 7) {
			main();
		}
		else
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Wrong  choice ... Please press enter and try again." << endl;
			cin.get();
			cin.get();
			main();
		}
	}
	else if (chh == 3) {
		exit(0);
	}
	else {
		system("cls");
		cout << "Wrong  choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		system("cls");
		main();
	}
}
void registar()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "How many mempers of register do you want : ";
	int x;
	cin >> x;
	reg s;
	for (i = 0; i < x; i++)
	{
		system("cls");
		cout << "***************************Welcome To Omar's Online Auction System****************************" << endl << endl;
		cout << " e-mail : ";
		cin >> email[i];
		cout << " Password : ";
		cin >> password[i];
		cout << " Your name : ";
		cin >> name[i];
		cout << " id : ";
		cin >> id[i];
		cout << " Phone number : ";
		cin >> s.number[i];
		cout << " your adress : ";
		cin >> s.adress[i];
	}
	system("cls");
	cout << "****************************** Welcome To Omar's Online Auction System ***************************" << endl << endl;
	cout << "Your registeration is successfulled ..Press enter to continue. " << endl << endl;
	cin.get();
	cin.get();
	main();
}
void add_Item()
{
	while (true)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "The availabe categories: ( accessories -sports - cars - shoes - phones - furniture - clothes - art - books )" << endl;
		cout << "Enter The The name of category you want to sell: ";
		cin >> categoryy[x];
		e = 1;
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Enter the Price of (" << e << ") item by dollars : ";
		cin >> cost[x];
		cout << "Enter the item sale date : ";
		cin >> start_date[x];
		cout << "Enter the end date of (" << e << ") item : ";
		cin >> end_date[x];
		item_owner[e] = name[x];
		u[x] = id[x];
		e++;
		cout << endl << "Do you want to sell another item: " << endl << "1- YES." << endl << "2-No." << endl << "Enter your choice:";
		int choicee;
		cin >> choicee;
		if (choicee == 1) {
			x++;
			continue;
		}
		else {
			break;
		}
	}
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cin.get();
	market_place();
	cout << "1- Sell item." << endl;
	cout << "2- Buy item." << endl;
	cout << "3- Points List" << endl;
	cout << "4- Search about special item." << endl;
	cout << "5- My message." << endl;
	cout << "6- Top category." << endl;
	cout << "7- Log out ." << endl;
	cout << "Enter your choice : ";
	int q;
	cin >> q;
	if (q == 1) {
		add_Item();
	}
	else if (q == 2) {
		pay_Item();
	}
	else if (q == 3) {
		mempers();
	}
	else if (q == 4) {
		search();
	}
	else if (q == 5) {
		chat();
	}
	else if (q == 6) {
		top_Category();
	}
	else if (q == 7) {
		main();
	}
	else
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		market_place();
	}
}
void market_place()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "Hello : " << name[i] << endl << endl;
	cout << "                                   The items list                                   " << endl << endl;
	item_number = 1;
	for (x = 0; x < e; x++)
	{
		cout << "( " << item_number << " )" << categoryy[x] << endl;
		cout << "- The item Price: " << cost[x] << "$" << endl;
		cout << "- The item sale date: " << start_date[x] << endl;
		cout << "- The item end date: " << end_date[x] << endl;
		status();
		cout << "*******************************************************************************" << endl << endl;
		w[x] = item_number;
		item_number++;
	}
	cout << "1- Sell item." << endl;
	cout << "2- Buy item." << endl;
	cout << "3- Points List" << endl;
	cout << "4- Search about special item." << endl;
	cout << "5- My message." << endl;
	cout << "6- Top category." << endl;
	cout << "7- Log out." << endl;
	cout << "Enter your choice : ";
	int q;
	cin >> q;
	if (q == 1) {
		add_Item();
	}
	else if (q == 2) {
		pay_Item();
	}
	else if (q == 3) {
		mempers();
	}
	else if (q == 4) {
		search();
	}
	else if (q == 5) {
		chat();
	}
	else if (q == 6) {
		top_Category();
	}
	else if (q == 7) {
		main();
	}
	else
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong  choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		market_place();
	}
}
void pay_Item()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "Enter the number of item you want to buy : ";
	int nn;
	cin >> nn;
	for (x = 0; x < 25; x++)
	{
		if (nn == w[x])
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "- The category Of item: " << categoryy[x] << endl;
			cout << "- The item Price: " << cost[x] << " $" << endl;
			cout << "- The item sale date: " << start_date[x] << endl;
			cout << "- The item end date: " << end_date[x] << endl;
			status();
			break;
		}
	}
	if (x == 25)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		pay_Item();
	}
	else {
		cout << endl << "Are you sure from this process: " << endl << "1- YES." << endl << "2- NO." << endl << "Enter your choice: ";
		int s;
		cin >> s;
		if (s == 1)
		{
			if (a[x] == 1)
			{
				system("cls");
				cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
				cout << "************************************************************************************************" << endl;
				cout << "This category is not availabe." << endl;
				cout << "************************************************************************************************" << endl << endl;
				cout << "1- item list." << endl << "2- Log out." << endl << "Enter your choice: ";
				int ll;
				cin >> ll;
				if (ll == 1) {
					market_place();
				}
				else if (ll == 2) {
					main();
				}
				else
				{
					system("cls");
					cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
					cout << "Wrong choice ... Please press enter and try again." << endl;
					cin.get();
					cin.get();
					pay_Item();
				}
			}
			else {
				buy_item();
				main();
			}
		}
		else if (s == 2)
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Your operation has been stopped .. please Press enter to continue..";
			cin.get();
			cin.get();
			market_place();
		}
		else
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Wrong choice ... Please press enter and try again." << endl;
			cin.get();
			cin.get();
			pay_Item();
		}
	}
}
void buy_item()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "************************************************************************************************" << endl;
	cout << "The Price of item: " << cost[x] << " $" << endl;
	cout << "************************************************************************************************" << endl << endl;
	cout << "1- Confirm the process." << endl << "2- Another price suggestion." << endl << "Enter your choice: ";
	int w;
	cin >> w;
	if (w == 1)
	{
		buyy++;
		a[x] = 1;
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "************************************************************************************************" << endl;
		cout << ".................... Congratulation ................" << endl;
		cout << "************************************************************************************************" << endl << endl;
		cout << "1- rate this item." << endl << "2- items list." << endl << "3- Log out." << endl << "Enter your choice: ";
		int ii;
		cin >> ii;
		if (ii == 1) {
			rating();
		}
		else if (ii == 2) {
			market_place();
		}
		else {
			main();
		}
	}
	else if (w == 2)
	{
		kl = categoryy[x];
		po = x;
		suggest();
	}
	else
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong  choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		buy_item();
	}
}
void status()
{
	if (a[x] == 1 || (a[po] == 1 && po == x)) {
		cout << "- The status: " << "un available(soled)." << endl;
	}
	else {
		cout << "- The status: " << "available." << endl;
	}
}
void rating()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "*****************************************************************************************" << endl;
	cout << "If you like this item , you can rate this process" << endl << "Rating (1-5) according to your liking" << endl;
	cout << "*****************************************************************************************" << endl << endl;
	cout << "your rating:";
	cin >> rankk;
	if (rankk >= 1 && rankk <= 2)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "1- items list." << endl << "2- Log out." << endl << "Enter your choice: ";
		int fv;
		cin >> fv;
		if (fv == 1) {
			market_place();
		}
		else if (fv == 2) {
			main();
		}
		else
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Wrong  choice ... Please press enter and try again." << endl;
			cin.get();
			cin.get();
			rating();
		}
	}
	else if (rankk >= 3 && rankk <= 5)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		for (x = 0; x < 25; x++)
		{
			if (u[x] == id[x])
			{
				point[x]++;
				break;
			}
		}
		cout << "************************************************************************************" << endl;
		cout << "Congratulation , We hope to like you more." << endl;
		cout << "************************************************************************************" << endl << endl;
		cout << "1- items list" << endl << "2- Log out" << endl << "Enter your choice: ";
		int j;
		cin >> j;
		if (j == 1) {
			market_place();
		}
		else if (j == 2) {
			main();
		}
		else
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Wrong  choice ... Please press enter and try again." << endl;
			cin.get();
			cin.get();
			rating();
		}
	}
	else {
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "The rating form 1 to 5 not more or less, Press Enter and try again.." << endl;
		cin.get();
		cin.get();
		rating();
	}
}
void mempers()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "                                   The points list                                   " << endl << endl;
	int yu = 1;
	for (x = 0; x < 25; x++)
	{
		if (id[x] == 0) {
			break;
		}
		if (u[x] == id[x])
		{
			cout << yu << "- " << name[x] << " ----> " << point[x] << " Points " << endl << endl;
			cout << "************************************************************************************" << endl << endl;
		}
		yu++;
	}
	cout << "************************************************************************************************" << endl;
	cout << endl << "1- Back" << endl << "2- Log out" << endl << "Enter your choice: ";
	int pi;
	cin >> pi;
	if (pi == 1) {
		market_place();
	}
	else if (pi == 2) {
		main();
	}
	else
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		mempers();
	}
}
void search()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "1- Search about category ." << endl << "2- Search about category and price." << endl << "Enter your choice : ";
	int rt;
	cin >> rt;
	if (rt == 1)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Enter the category of item you want : ";
		string qp;
		cin >> qp;
		for (x = 0; x < 25; x++)
		{
			if (qp == categoryy[x])
				break;
		}
		if (x == 25)
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "*****************************************************************************************" << endl;
			cout << "This category is not available." << endl;
			cout << "*****************************************************************************************" << endl << endl;
			cout << "1- Try again." << endl << "2- Log out." << endl << "Enter your choice: ";
			int fl;
			cin >> fl;
			if (fl == 1) {
				search();
			}
			else if (fl == 2) {
				main();
			}
			else
			{
				system("cls");
				cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
				cout << "Wrong  choice ... Please press enter and try again." << endl;
				cin.get();
				cin.get();
				search();
			}
		}
		else {
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "*****************************************************************************************" << endl;
			cout << "- The category: " << categoryy[x] << endl;
			cout << "- The price: " << cost[x] << endl;
			cout << "- The item  start date: " << start_date[x] << endl;
			cout << "- The item end date: " << end_date[x] << endl;
			status();
			cout << "*****************************************************************************************" << endl << endl;
			cout << "1- Buy this item." << endl << "2- Log out." << endl << "Enter your choice: ";
			int io;
			cin >> io;
			if (io == 1) {
				a[x] = 1;
				buy_item();
			}
			else if (io == 2) {
				main();
			}
			else
			{
				system("cls");
				cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
				cout << "Wrong choice ... Please press enter and try again." << endl;
				cin.get();
				cin.get();
				search();
			}
		}
	}
	else if (rt == 2)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << " - Enter the category of item you want: ";
		string nn;
		cin >> nn;
		cout << " - Enter the price of item you want: ";
		int rk;
		cin >> rk;
		for (x = 0; x < 25; x++)
		{
			if (nn == categoryy[x] && rk == cost[x])
				break;
		}
		if (x == 25)
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "************************************************************************************************" << endl;
			cout << "This category is not available." << endl;
			cout << "************************************************************************************************" << endl << endl;
			cout << "1- Try again." << endl << "2- Log out" << endl << "Enter your choice: ";
			int yy;
			cin >> yy;
			if (yy == 1) {
				search();
			}
			else if (yy == 2) {
				main();
			}
			else
			{
				system("cls");
				cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
				cout << "Wrong  choice ... Please press enter and try again." << endl;
				cin.get();
				cin.get();
				search();
			}
		}
		else {
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "************************************************************************************************" << endl;
			cout << "- The category: " << categoryy[x] << endl;
			cout << "- The price: " << cost[x] << endl;
			cout << "- The item start date: " << start_date[x] << endl;
			cout << "- The item end date: " << end_date[x] << endl;
			status();
			cout << "************************************************************************************************" << endl << endl;
			cout << "1- Buy this item." << endl << "2- Log out." << endl << "Enter your choice: ";
			int mm;
			cin >> mm;
			if (mm == 1) {
				a[x] = 1;
				buy_item();
			}
			else if (mm == 2) {
				main();
			}
			else
			{
				system("cls");
				cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
				cout << "Wrong  choice ... Please press enter and try again." << endl;
				cin.get();
				cin.get();
				search();
			}
		}
	}
	else
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong  choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		search();
	}
}
void suggest()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "Enter the price you want by dollars: ";
	cin >> pay;
	fg = v;
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	cout << "*****************************************************************************************" << endl;
	cout << "The suggested Price has been sent to the seller, Wait for approval or rejection soon" << endl;
	cout << "*****************************************************************************************" << endl << endl;
	cout << "1- items list." << endl << "2- Log out." << endl << "Enter your choice: ";
	int r;
	cin >> r;
	if (r == 1) {
		market_place();
	}
	else if (r == 2) {
		main();
	}
	else
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong  choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		suggest();
	}
	chat();
}
void chat()
{
	if (gh[x] == 1) {
		accept1();
	}
	else if (gh[x] == 2) {
		accept2();
	}
	int s = 1;
	if (item_owner[s] == v)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Someone wants to buy this item (" << kl << ") at a price: " << pay << " $." << endl;
		cout << "1- Accept." << endl << "2- Refuse." << endl << "3- Log out." << endl << "Enter your choice: ";
		cin >> gh[x];
		if (gh[x] == 1)
		{
			buyy++;
			a[po] = 1;
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "*****************************************************************************************" << endl;
			cout << "This process has been successfuled" << endl;
			cout << "*****************************************************************************************" << endl << endl;
			cout << "1- items list." << endl << "2- Log out." << endl << "Enter yor choice: ";
			int ww;
			cin >> ww;
			if (ww == 1) {
				market_place();
			}
			else if (ww == 2) {
				main();
			}
			else
			{
				system("cls");
				cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
				cout << "Wrong  choice ... Please press enter and try again." << endl;
				cin.get();
				cin.get();
				system("cls");
				cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
				cout << "*****************************************************************************************" << endl;
				cout << "This process has been successfuled" << endl;
				cout << "*****************************************************************************************" << endl << endl;
				cout << "1- items list." << endl << "2- Log out." << endl << "Enter yor choice: ";
				int ww;
				cin >> ww;
				if (ww == 1) {
					market_place();
				}
				else if (ww == 2) {
					main();
				}
			}
		}
		else if (gh[x] == 2)
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "*****************************************************************************************" << endl;
			cout << "This process didn't have been successfuled, the price has been refused." << endl;
			cout << "*****************************************************************************************" << endl << endl;
			cout << "1- items list." << endl << "2- Log out." << endl << "Enter your choice: ";
			int zz;
			cin >> zz;
			if (zz == 1) {
				market_place();
			}
			else if (zz == 2) {
				main();
			}
			else
			{
				system("cls");
				cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
				cout << "Wrong  choice ... Please press enter to item list." << endl;
				cin.get();
				cin.get();
				market_place();
			}
		}
		else if (gh[x] == 3) {
			main();
		}
		else
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Wrong on choice ... Please press enter to try again." << endl;
			cin.get();
			cin.get();
			chat();
		}
	}
	else
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "                                                  Empty                                         " << endl << endl;
		cout << "1- items list." << endl << "2- Log out." << endl << "Enter your choice: ";
		int sp;
		cin >> sp;
		if (sp == 1) {
			market_place();
		}
		else if (sp == 2) {
			main();
		}
		else
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Wrong  choice ... Please press enter and try again." << endl;
			cin.get();
			cin.get();
			chat();
		}
	}
}
void accept1()
{
	if (fg == v)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "The seller Confirmed your suggest, Congratulation..." << endl;
		cout << "*****************************************************************************************" << endl << endl;
		cout << "1- Rate The item" << endl << "2- items list" << endl << "3- Log out." << endl << "Enter your choice: ";
		int es;
		cin >> es;
		if (es == 1) {
			rating();
		}
		else if (es == 2) {
			market_place();
		}
		else if (es == 3) {
			main();
		}
		else
		{
			system("cls");
			cout << "************************************* Welcome To Omar's Online Auction System *************************************" << endl << endl;
			cout << "Wrong  choice ... Please press enter to item list." << endl;
			cin.get();
			cin.get();
			market_place();
		}
	}
}
void accept2()
{
	if (fg == v)
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "*****************************************************************************************" << endl;
		cout << "The seller refused your suggest." << endl;
		cout << "*****************************************************************************************" << endl << endl;
		cout << endl << "1- items list." << endl << "2- Log out." << endl << "Enter your choice: ";
		int qw;
		cin >> qw;
		if (qw == 1) {
			market_place();
		}
		else if (qw == 2) {
			main();
		}
		else
		{
			system("cls");
			cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
			cout << "Wrong on choice ... Please press enter to your message." << endl;
			cin.get();
			cin.get();
			accept2();
		}
	}
}
void top_Category()
{
	system("cls");
	cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
	int top = 0;
	string top_name;
	int num, counter = 0, c = 0;
	for (int x = 0; x <= buyy; x++)
	{
		if (a[x] == 1)
			c = 1;
	}
	if (buyy == 0 || c != 1)
	{
		cout << "*********************************************************************************************" << endl;
		cout << "no items selled" << endl;
		cout << "*********************************************************************************************" << endl << endl;
	}
	else if (buyy >= 1)
	{
		for (int x = 0; x <= buyy; x++)
		{
			if (a[x] == 1)
			{
				if (categoryy[x] == "accessories") {
					y[0]++;
				}
				else if (categoryy[x] == "sports") {
					y[1]++;
				}
				else if (categoryy[x] == "cars") {
					y[2]++;
				}
				else if (categoryy[x] == "shoes") {
					y[3]++;
				}
				else if (categoryy[x] == "phones") {
					y[4]++;
				}
				else if (categoryy[x] == "furniture") {
					y[5]++;
				}
				else if (categoryy[x] == "clothes") {
					y[6]++;
				}
				else if (categoryy[x] == "art") {
					y[7]++;
				}
				else if (categoryy[x] == "books") {
					y[8]++;
				}
				for (int k = 0; k <= 9; k++)
				{
					if (y[k] >= top)
					{
						top = y[k];
						if (k == 0) {
							top_name = "accessories";
						}
						else if (k == 1) {
							top_name = "sports";
						}
						else if (k == 2) {
							top_name = "cars";
						}
						else if (k == 3) {
							top_name = "shoes";
						}
						else if (k == 4) {
							top_name = "phones";
						}
						else if (k == 5) {
							top_name = "furniture";
						}
						else if (k == 6) {
							top_name = "clothes";
						}
						else if (k == 7) {
							top_name = "art";
						}
						else if (k == 8) {
							top_name = "books";
						}
						num = k;
					}
				}
				// cars - accessories - shoes - clothes - sports - electronics - furniture - art - antique - books
			}
		}
	}
	cout << "********************************************************************************" << endl;
	cout << "The most selled top category is: " << top_name << endl;
	cout << "********************************************************************************" << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		y[i] = 0;
	}
	cout << "1- items list." << endl << "2- Log out." << endl << "Enter your choice: ";
	int rt;
	cin >> rt;
	if (rt == 1) {
		market_place();
	}
	else if (rt == 2) {
		main();
	}
	else
	{
		system("cls");
		cout << "***************************** Welcome To Omar's Online Auction System **************************" << endl << endl;
		cout << "Wrong  choice ... Please press enter and try again." << endl;
		cin.get();
		cin.get();
		cout << "1- items list." << endl << "2- Log out." << endl << "Enter your choice: ";
		int rt;
		cin >> rt;
		if (rt == 1) {
			market_place();
		}
		else if (rt == 2) {
			main();
		}
	}
}