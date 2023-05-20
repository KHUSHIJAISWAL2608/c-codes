#include <iostream.h>
using namespace std;
// function : evenNumbers
// description: to print EVEN numbers only.
void evenNumbers(int n)
{
int i;
for (i = 1; i <= n; i++) {
//condition to check EVEN numbers
if (i % 2 == 0)
cout << i << " ";
}
cout << "\n";
}
// function : oddNumbers
// description: to print ODD numbers only.
void oddNumbers(int n)
{
int i;
for (i = 1; i <= n; i++) {
//condition to check ODD numbers
if (i % 2 != 0)
cout << i << " ";
}
cout << "\n";
}
// main code
int main()
{
int N;
// input the value of N
cout << "Enter the value of N (limit): ";
cin >> N;
cout << "EVEN numbers are...\n";
evenNumbers(N);
cout << "ODD numbers are...\n";
oddNumbers(N);
return 0;
}
