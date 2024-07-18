#include <iostream>
using namespace std;
int main()
{
    int no_deals, order;

    cout << "--------------MENU-----------------" << endl;
    cout<<endl;

    cout << "(1) CHICKEN TEKKA                    2$ ONLY"<<endl;
    cout << "(2) PANEER MASALA                    5$ ONLY"<<endl;
    cout << "(3) CHICKEN MASALA                   3$ ONLY"<<endl; 
    cout << "(4) BIRYANNI                         2$ ONLY"<<endl;
    cout << "(5) CHICKEN BIRYANI                  3$ ONLY"<<endl; 
    cout << "(6) CHINESE RICE                     2.5$ ONLY"<<endl; 
    cout << "(7) NAWABI PIZZA                     1.75$ ONLY"<<endl; 
    cout << "(8) CHICKEN BURGER                   7$ ONLY"<<endl;
    cout << "(9) COCA COLA                        1$ ONLY"<<endl;
    cout << "(10) SPIRIT                          1$ ONLY"<<endl; 
    cout << "(11) CHICKEN PULAO                   3.5$ ONLY"<<endl;    
    cout << "(12) WATER                           0.5$ ONLY"<<endl;  
    cout << "(13) MINERAL WATER                   0.9$ ONLY" <<endl; 
    cout << endl;
    cout << "Please select the order number:"<<endl;
    cin >> order;
    cout << "Please select the number of the deals:"<<endl;
    cin >> no_deals;
    cout << endl;
    switch (order)
    {
    case 1:
        cout << "order: CHICKEN TEKKA: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: $2 ONLY" << endl;
        cout << "Total price: "
             << "$" << 2 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
             
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 2:
        cout << "order: PANEER MASALA: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: 5$ ONLY" << endl;
        cout << "Total price: "
             << "$" << 5 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 3:
        cout << "order: CHICKEN MASALA: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: $3 ONLY" << endl;
        cout << "Total price: "
             << "$" << 3 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 4:
        cout << "order: BIRYANI: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: $2 ONLY" << endl;
        cout << "Total price: "
             << "$" << 2 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 5:
        cout << "order: CHICKEN BIRYANI: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: $3 ONLY" << endl;
        cout << "Total price: "
             << "$" << 3 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 6:
        cout << "order: CHINESE RICE: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: $2.5 ONLY" << endl;
        cout << "Total price: "
             << "$" << 2.5 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 7:
        cout << "order: NAWABI PIZZA: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: $1.75 ONLY" << endl;
        cout << "Total price: "
             << "$" << 1.75 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 8:
        cout << "order: CHICKEN BURGER: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: 7$ ONLY" << endl;
        cout << "Total price: "
             << "$" << 7 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 9:
        cout << "order: COCA COLA: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: 1$ ONLY" << endl;
        cout << "Total price: "
             << "$" << 1 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 10:
        cout << "order: SPIRIT: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: 1$ ONLY" << endl;
        cout << "Total price: "
             << "$" << 1 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 11:
        cout << "order: CHICKEN PULAO: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: 3.5$ ONLY" << endl;
        cout << "Total price: "
             << "$" << 3.5 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 12:
        cout << "order: WATER: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: $0.5 ONLY" << endl;
        cout << "Total price: "
             << "$" << 0.5 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;
    case 13:
        cout << "order: MINERAL WATER: " << order << endl;
        cout << "Number of deals: " << no_deals << endl;
        cout << "Price of each quantity: $0.9 ONLY" << endl;
        cout << "Total price: "
             << "$" << 0.9 * no_deals << " ONLY" << endl;
             cout<<"----------PLEASE WAIT 30 MIN FOR YOUR ORDER---------------"<<endl;
        cout << endl;
        cout << "--------------THANKS FOR COMING---------------" << endl;
        break;

    default:
        cout << "SORRY! YOU HAVE ENTERD THE WRONG ORDER.PLEASE ENTERED THE RIGHT ONE " << endl;
        break;
    }

    return 0;
}