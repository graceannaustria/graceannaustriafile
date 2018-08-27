#include <iostream>

using namespace std;

int main ()
{
	int b = 0, l = 0, u = 0,r = 165, c = 135
	,d = 119,e = 327,g = 223 ;	
	
	cout <<" Haul \n\n";	
	cout << "\t1. notebook= "<< r <<"pesos \n"<< "\t2. colored pen= "<< d <<"pesos \n"<< "\t3. reem of bondpaper= "<< e <<"pesos \n"<< "\t4. erazer pen= "<< c <<"pesos \n"<< "\t5. assorted contruction paper= "<< g <<"pesos \n"<< endl;	
	
	cout <<"\n What product would you like to buy?";
	cin >> b;
	
	cout <<"\n How many products would you like to buy?";
	cin >> u;
	

	if (u == 1)
 	{
		cout << "\n Total Amount: " << r*b << " Pesos";
	}
 	else if (u == 2)
 	{
	  	cout << "\n Total Amount: " << c*b<< " Pesos";
	}
	else if (u == 3)
	{
	  	cout << "\n Total Amount: " << d*b << " Pesos";
	}
	else if (u == 4)
	{
	  	cout << "\n Total Amount: " << e*b << " Pesos";
	}
	else if (u == 5)
    {
        cout << "\n Total Amount: " << g*b << " Pesos";
    }

	cout << "\n\n How much is your budget?";
	cin >> l;
	if (u == 1)
 	{
		cout << "\n Your Exchange Money: " << l-(r*b) << " Pesos";
	}
 	else if (u == 2)
 	{
	  	cout << "\n Your Exchange Money: " << l-(c*b) << " Pesos";
	}
	else if (u == 3)
	{
	  	cout << "\n Your Exchange Money: " << l-(d*b) << " Pesos";
	}
	else if (u == 4)
	{
	  	cout << "\n Your Exchange Money: " << l-(e*b) << " Pesos";
	}
	else if (u == 5)
    {
        cout << "\n Your Exchange Money: " << l-(g*b) << " Pesos";
    }
    cout << "\n\n";
	return 0;
}