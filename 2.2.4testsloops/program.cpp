#include <iostream>
/*Code demonstration of Bjarne's C++ book 2.2.4
Tests and Loops
*/
/*code (1) bool accept()
{
cout << "Do you want to proceed (y or n)?\n"; // write question
char answer = 0;
cin >> answer; // read answer
if (answer == 'y') return true;
return false;
}
*/
/*code (2) bool accept2()
{
cout << "Do you want to proceed (y or n)?\n"; // write question
char answer = 0;
cin >> answer; // read answer
switch (answer) {
case 'y':
return true;
case 'n':
return false;
default:
cout << "I'll take that for a no.\n";
return false;
}
}
*/
/*code (3) bool accept3()
{
int tries = 1;
while (tries<4) {
cout << "Do you want to proceed (y or n)?\n"; // write question
char answer = 0;
cin >> answer; // read answer
switch (answer) {
case 'y':
return true;
case 'n':
return false;
default:
cout << "Sorry, I don't understand that.\n";
++tries; // increment
}
}
cout << "I'll take that for a no.\n";
return false;
}
The while-stat
*/
int main () {
std::cout << "Program Executed" << std::endl;
/*to call function, function1()*/
std::cin.get();
return 0;
}
