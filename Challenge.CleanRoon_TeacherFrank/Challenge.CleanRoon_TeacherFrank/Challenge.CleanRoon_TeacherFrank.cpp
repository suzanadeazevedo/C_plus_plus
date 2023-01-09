/* Frank's Carpet Cleaning Service
    Charges:
    $ 25 per small room
    $ 35 large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large room they would like cleaned
*/
#include <iostream>
using namespace std;

int main()
{
    cout << "=================================================" << endl;
    cout << "\nFrank's Carpet Cleaning Service\n\n";
    cout << "=================================================" << endl;
   
    cout << "\nPrices: \n" <<endl;
    cout << "Small Room: US$ 25.00 " <<endl;
    cout << "Large Room: US$ 35.00" <<endl;
    cout << "Tax: 6%" << endl;

    cout << "\n=================================================\n" << endl;

    int number_of_small_room { 0 };
    cout << "How many small rooms would you like cleaned ?" << endl;
    cin >> number_of_small_room;

    int number_of_large_room { 0 };
    cout << "How many large rooms would you like cleaned ?" << endl;
    cin >> number_of_large_room;

    cout << "\n-------------------------------------------------------------------\n" << endl;

    const double price_small_room { 25.00 };
    const double price_large_room { 35.00 };
    const double tax { 0.06 };
    const int expiry_days { 30 };

    const double calculation_small_room_service = number_of_small_room * price_small_room;
    const double calculation_large_room_service = number_of_large_room * price_large_room;

    const double with_tax_calculation_small_room = (tax * calculation_small_room_service) + calculation_small_room_service;
    const double with_tax_calculation_large_room = (tax * calculation_large_room_service) + calculation_large_room_service;
    const double total_estimate = with_tax_calculation_large_room + with_tax_calculation_small_room;

    cout << "Cost Small Rooms with tax: US$ " << with_tax_calculation_small_room <<endl;
    cout << "Cost Large Rooms with tax: US$ " << with_tax_calculation_large_room << "\n" <<endl;
    cout << "Total estimate Rooms: US$ " << total_estimate << endl;

    cout << "\n\nThis estimate is valid for " << expiry_days << " days" << endl;
    cout << "\n-------------------------------------------------------------------" << endl;

    return 0;
}


