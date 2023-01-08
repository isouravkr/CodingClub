#include <iostream>
using namespace std;
int main()
{
     int n, number, digit, rev = 0;
     cout << "Enter a positive number to check whether it is palindrome or not: ";
     cin >> number;
     n = number;
     do
     {
         digit = number % 10;
         rev = (rev * 10) + digit;
         number = number / 10;
     } 
	 while (number != 0);
     cout << " The reverse of the number is: " << rev << endl;
     if (n == rev)
         cout << "True ";
     else
         cout << "False";
    return 0;
}
