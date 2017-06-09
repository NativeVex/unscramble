#include <iostream>
#include <vector>
//#include "preprocess.cpp" 

using namespace std;

void Unscramble(char * w1, char * w2, char * w3, char * w4, char * w5) {
//Unscramble

// need to convert char to std::vector<char>
vector<char> inputs = (w1, w2, w3, w4, w5);
vector<char> inputFrequencies;

char input
for (input::inputs){
//inputFrequencies.push_back(NumFrequency(input));
}

cout << "The unscrambled sentence is: " << w1 << " " << w2 << " " << w3 << " " << w4 << " " << w5 << endl;
}

void UpdateAI() {

}

int main() {
char input;
cout << "Enter a the first word in the SCRAMBLED sentence: " << endl;
cin >> input;
vector<char> w1(input.begin(), input.end());

cout << "Second word: " << endl;
cin >> input;
vector<char> w2(input.begin(), input.end());

cout << "Third word: " << endl;
cin >> input;
vector<char> w3(input.begin(), input.end());

cout << "Fourth word: " << endl;
cin >> input;
vector<char> w4(input.begin(), input.end());

cout << "Fifth word: " << endl;
cin >> input;
vector<char> w5(input.begin(), input.end());

//debug

cout << "The scrambled sentence you have entered is: " << w1 << " " << w2 << " " << w3 << " " << w4 << " " << w5 << endl;

Unscramble(w1, w2,w3, w4, w5);

return 0;
}
