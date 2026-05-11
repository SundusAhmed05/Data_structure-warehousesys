#include <iostream>
#include <string>
using namespace std;

int main() {

    string word;
    string reversed = "";

    char stack[100];
    int top = -1;

    cout << "Enter a word: ";
    cin >> word;

    // Push characters into stack
    for (int i = 0; i < word.length(); i++) {
        top++;
        stack[top] = word[i];
    }

    // Pop characters from stack
    while (top != -1) {
        reversed += stack[top];
        top--;
    }

    // Check palindrome
    if (word == reversed) {
        cout << "It is a Palindrome." << endl;
    } else {
        cout << "It is NOT a Palindrome." << endl;
    }
return 0;
}
