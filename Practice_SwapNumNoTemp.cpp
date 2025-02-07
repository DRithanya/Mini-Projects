#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;

    cin >> num1 >> num2;
    cout << "Before invoking the swap function, num1 is " << num1 << " and num2 is " << num2 << endl;

    cout << '\t' << "Inside the swap function" << endl;
    cout << '\t' << "Before swapping a is " << num1 << " b is " << num2 << endl;
    num1 += num2;                                                               // adding both numbers and storing it in num1
    num2 = num1 - num2;                                                         // subtracting num2 from total (storing in num2)
    num1 -= num2;                                                               // substracting the flipped number from total (storing in num1)
    cout << '\t' << "After swapping a is " << num1 << " b is " << num2 << endl; // displays the flipped numbers
    cout << "After invoking the swap function, num1 is " << num1 << " and num2 is " << num2 << endl;
}