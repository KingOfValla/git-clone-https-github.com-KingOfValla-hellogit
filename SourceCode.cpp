#include <iostream>
#include <vector>
#include "Header.h"
using namespace std;

int main()
{
	vector<Player> list;
	int par; //Number of Participants//
	int num; //Player Number//
	char col; //Team Color//

	Player Play;
	cout<<"Welcome to the Registration for the Game, Royale.\n";
	cout<<"Before we begin, you will need to register the number of players participating\n";
	cin >> par;
	cout << endl << endl;
	
	for (int i = 0; i < par; i++)
	{
		cout <<"Please enter your Player Number :" << endl;
		cin >> num;
		cout <<"Please enter your Team Color. 'R' for Red, 'B' for Blue, 'Y' for Yellow, 'G' for Green :" << endl; 
		cin >> col;
		cout << endl;

		Play.setNumber(num);
		Play.setColor(col);
		list.push_back(Play);
		cin.get();		
	}		
	
	vector<Player>::iterator repeat; //This sets up the iterator for the loop below//

	for( repeat = list.begin(); repeat != list.end(); repeat++)
	{
		repeat ->printPlayerInfo();
	}

	cout << endl <<"Number of Players registered : " << list.size() <<endl;

	system("pause");
	return 0;
}