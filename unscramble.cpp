#include <iostream>
#include "preprocess.h" 

using namespace std;

// GETS SEGMENTATION FAULT WHEN NumFrequency(string word) IS CALLED 

void Unscramble(string w1, string w2, string w3, string w4, string w5){
//Unscramble

vector<string> inputs = {w1, w2, w3, w4, w5};
vector<vector<string>> inputFrequencies;
for (string word : inputs){
  //Adds the letter frequency for each word into inputFrequencies
  inputFrequencies.push_back(NumFrequency(word));
}

cout << "The unscrambled sentence is: " << w1 << " " << w2 << " " << w3 << " " << w4 << " " << w5 << endl;
}

void UpdateAI() {

}

int main() {
string w1, w2, w3, w4, w5;
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

cout << "Your scrambled sentence is: " << w1 << " " << w2 << " " << w3 << " " << w4 << " " << w5 << endl;

Unscramble (w1, w2, w3, w4, w5);
return 0;
}
