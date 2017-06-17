#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <cctype>

using namespace std;

vector<string> NumFrequency(string word){
    vector<char> letters = {'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    vector<char> Upper = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    vector<int> frequency(26);

    for (int i = 0; i < word.length(); i++){
        for (int j = 0; j < letters.size(); j++){
            if (letters[j]== word[i] || Upper[j] == word[i]){
                frequency[j] ++;
            }
        }
    }

    vector <string> freq;
    for (int k = 0; k < frequency.size(); k++){
        if (frequency[k] > 0){
            string adding = letters[k] + to_string(frequency[k]);
            //cout << adding << endl;
            freq.push_back(adding);
        }
    }
    
}
