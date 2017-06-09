#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(){
vector<string> array(1);

}

void NumLetters(string word){
array<char,26> letters = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

array<int,26> frequency;

for (int i = 0; i < word.size(); i++){
char letter = word[i];
for (int j = 0; j < letters.size(); j++){
if (letter == letters[j]){
frequency[j]++;
break;
}
}
}
vector<string> array; 
for (int h = 0; h < frequency.size(); h++){
if (frequency[h] > 0){
string wordFreq = letters[h] + ": " + frequency[h];
array.insert(wordFreq);
}
}
}
