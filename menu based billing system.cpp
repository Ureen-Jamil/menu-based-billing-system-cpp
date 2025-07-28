#include<iostream>
#include<string>
using namespace std;
int main(){
	//prices
	int Burger = 200;
	int Rice = 300;
	int Pizza = 500;
	int Biryani = 250;
	int Sandwich = 150;
	int Fries = 100;
	int Cold_Drink = 80;
	
	//choices x quantities 
	int choice1,choice2,choice3;
	int quantity1,quantity2,quantity3;
	int total=0;
	
	cout<<"============MENU============\n\n";
	cout<<"Press 1 for Burger =  Rs.200\n";
	cout<<"Press 2 for Rice =  Rs.300\n";
	cout<<"Press 3 for Pizza =  Rs.500\n";
	cout<<"Press 4 for Biryani =  Rs.250\n";
	cout<<"Press 5 for Sandwich =  Rs.150\n";
	cout<<"Press 6 for Fries =  Rs.100\n";
	cout<<"Press 7 for Cold Drink =  Rs.80\n";
	cout<<"\n\n===================================\n\n";
	cout<<"Enter Your First Choice\n";
	cin>>choice1;
	cout<<"Enter Quantity\n";
	cin>>quantity1;
	cout<<"Enter Your Second Choice\n";
	cin>>choice2;
	cout<<"Enter Quantity\n";
	cin>>quantity2;
	cout<<"Enter Your Third Choice\n";
	cin>>choice3;
	cout<<"Enter Quantity\n";
	cin>>quantity3;
	//calculations for 1st choice
	if (choice1 == 1) total += Burger * quantity1;
    else if (choice1 == 2) total += Rice * quantity1;
    else if (choice1 == 3) total += Pizza * quantity1;
    else if (choice1 == 4) total += Biryani * quantity1;
    else if (choice1 == 5) total += Sandwich * quantity1;
    else if (choice1 == 6) total += Fries * quantity1;
    else if (choice1 == 7) total += Cold_Drink * quantity1;
    else if (choice1 >=8)
    cout<<"Invalid choice\n";
    	//calculations for 2nd choice
	if (choice2 == 1) total += Burger * quantity1;
    else if (choice2 == 2) total += Rice * quantity1;
    else if (choice2 == 3) total += Pizza * quantity1;
    else if (choice2 == 4) total += Biryani * quantity1;
    else if (choice2 == 5) total += Sandwich * quantity1;
    else if (choice2 == 6) total += Fries * quantity1;
    else if (choice2 == 7) total += Cold_Drink * quantity1;
       else
	    cout<<"Invalid choice\n";

    //calculations for 3rd choice
    if (choice3 == 1) total += Burger * quantity1;
    else if (choice3 == 2) total += Rice * quantity1;
    else if (choice3 == 3) total += Pizza * quantity1;
    else if (choice3 == 4) total += Biryani * quantity1;
    else if (choice3 == 5) total += Sandwich * quantity1;
    else if (choice3 == 6) total += Fries * quantity1;
    else if (choice3 == 7) total += Cold_Drink * quantity1;
	else
	    cout<<"Invalid choice\n";
	//total
	cout << "\n==============================\n\n";
    cout << "Your total bill is: Rs." << total << endl;
    cout << "\n==============================\n";
	return 0;


}


