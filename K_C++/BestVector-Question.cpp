#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;

vector<string> letterCombinations(string digits) {
    if (digits.empty()) return {};
    
    vector<string> mapping = {
        "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    vector<string> result;
    string combination;

    function<void(int)> backtrack = [&](int index) {
        if (index == digits.size()) {
            result.push_back(combination);
            return;
        }

        string letters = mapping[digits[index] - '0'];
        for (char letter : letters) {
            combination.push_back(letter);
            backtrack(index + 1);
            combination.pop_back();
        }
    };

    backtrack(0);
    return result;
}

int main() {
    string digits;
    cout << "Enter digits: ";
    cin >> digits;

    vector<string> combinations = letterCombinations(digits);

    cout << "The combinations are: ";
    for (const string& combo : combinations) {
        cout << combo << " ";
    }
    cout << endl;

    return 0;
}
