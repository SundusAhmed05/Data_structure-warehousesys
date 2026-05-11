#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string word;
    stack<char> s;
    string reversed = "";

    cout << "Enter a word: ";
    cin >> word;

    // Push each character into the stack
    for (int i = 0; i < word.length(); i++) {
        s.push(word[i]);
    }

    // Pop characters to create reversed word
    while (!s.empty()) {
        reversed += s.top();
        s.pop();
    }

    // Compare original and reversed
    if (word == reversed) {
        cout << "It is a Palindrome." << endl;
    } else {
        cout << "It is NOT a Palindrome." << endl;
    }

    return 0;
}
