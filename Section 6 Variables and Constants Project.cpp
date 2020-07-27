/* Jacob Turnquist

07/24/2020

Section 6 Variables and Constants Project

In this project I was tasked with making a program that would give the user an exact estimate for the price of cleaning rooms.

 */

#include <iostream>

using namespace std;

int main() {

    cout << "Thank You For Choosing Stanley Steamer!" << endl; // I couldn't think of any thing original to name it lol

    cout << "\nHow many small rooms would you like cleaned? ";
    int number_of_s_rooms{ 0 }; // Are these names too long maybe but it works for now 
    cin >> number_of_s_rooms;

    cout << "\nHow many large rooms would you like cleaned? ";
    int number_of_l_rooms;
    cin >> number_of_l_rooms;


    const double price_per_s_room{ 20.0 }; // Not sure the correct place to have these in the code here is fine I suppose but I want my code to be readible
    const double price_per_l_room{ 50.0 }; // Also I was getting a stack error before I had defined constants. DO NOT FORGET HOW TO USE THEM PLESE JACOB!!!!!!
    const double sales_tax{ 0.06 };
    const int estimate_exper{ 30 };//days

    cout << "\nEstimate For Services" << endl;
    cout << "Number Of Small Rooms: " << number_of_s_rooms << endl;
    cout << "Number Of Large Rooms: " << number_of_l_rooms << endl;
    cout << "Price Per Small Room: $" << price_per_s_room << endl;
    cout << "Price Per Large Room: $" << price_per_l_room << endl;
    cout << "Cost: $" << (price_per_s_room * number_of_s_rooms) + (price_per_l_room * number_of_l_rooms) << endl;
    cout << "Tax: $" << ((price_per_s_room * number_of_s_rooms) + (price_per_l_room * number_of_l_rooms)) * sales_tax << endl;
    cout << "=====================================" << endl;
    cout << "Your Estimate is: $" << ((price_per_s_room * number_of_s_rooms) + (price_per_l_room * number_of_l_rooms) * sales_tax) << endl;
    cout << "This Estimate Is Valid For Only " << estimate_exper << " Days" << endl;

    return 0;
}


