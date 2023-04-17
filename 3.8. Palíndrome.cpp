#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;
    cin >> word;

    bool isPalindrome = true;
    for (int i = 0, j = word.length() - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << word << " é palíndrome" << endl;
    } else {
        cout << word << " não é palíndrome" << endl;
    }

    return 0;
}