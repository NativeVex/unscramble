#include <iostream>

using namespace std;

char Unscramble() {
return '0';
}

void UpdateAI() {

}

int main() {
char w1[32];
char w2[32];
char w3[32];
char w4[32];
char w5[32];

cout << "Enter a the first word in the SCRAMBLED sentence: " << endl;
cin >> w1;
cout << "Second word: " << endl;
cin >> w2;
cout << "Third word: " << endl;
cin >> w3;
cout << "Fourth word: " << endl;
cin >> w4;
cout << "Fifth word: " << endl;
cin >> w5;

//debug
cout << "The sentence you have entered is: " << w1 << ", " << w2 << ", " << w3 << ", " << w4 << ", " << w5 << endl;

cout << Unscramble();

return 0;
}
