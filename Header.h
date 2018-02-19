#include <iostream>
#include <vector>
using namespace std;

class Player
{
private:
	int number; //Player Number//
	char color; //Player Team Color//

public:
	void setColor (char tempColor )
	{	color = tempColor;	}
	
	char getColor ()
	{	return color;	}

	void setNumber (int tempNumber )
	{	number = tempNumber;	}

	int getNumber ()
	{	return number;		}

	void printPlayerInfo()
	{
		cout <<"Player Number	: " << getNumber() << endl;
		cout <<"Player Color	: " << getColor() << endl;
		cout <<"_______________________________________________"<<endl;
	}
};
