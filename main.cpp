#include <iostream>
using namespace std;

// O(1) time | O(1) space
char getNewLetter(char &letter, string &alphabet, int &key) {
    int index = alphabet.find(letter) + key;
    return alphabet[index % 26];
}

// O(n) time | O(1) space
string caesarCypherEncryptor(string &str, int &key) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";// O(1) space
    for(char & i : str) {// O(n) time
        i = getNewLetter(i, alphabet, key);// O(1) time | O(1) space
    }
    return str;
}

int main() {
    string input = "xyz";
    int key = 3;
    cout << caesarCypherEncryptor(input, key);
    return 0;
}
