// ch4onlineShoppingDiscounts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Ch 4 Discounts by Kevin Bell\n\n";
    auto spending = 0.0,discount=0.0;
    cout << "How much did you spend with us last month? ";
    cin >> spending;
    if (spending > 1 && spending < 50) {
        discount = 0;
    }
    else if (spending >= 50 && spending < 100) {
        discount = 5;
    } 
    else if (spending >= 100 && spending < 150) {
        discount = 10;
    }
    else if (spending >= 150 && spending < 200) {
        discount = 15;
    }
    else if (spending >= 200 && spending < 250) {
        discount = 20;
    }
    else if (spending >= 250) {
        discount = 50;
    }
    cout << "Your discount next month is $" << discount << endl;
    //Keep window open til done
    system("pause");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
