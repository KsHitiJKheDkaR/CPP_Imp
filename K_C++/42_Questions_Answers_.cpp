#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string questions[] = {"1.Who invented C++\n",
                          "2.When was C++ invented\n",
                          "3.Is the Earth Plat\n",
                          "4.Which lanaguage is predecesor of C++\n",
                          "5.What is New Feature of C++\n"};

    string options[][4] = {
        {"A.Gudio Van Rossum", "B.Bjarne Stroustrup", "C.Mark Zukerburg", "D.JOn Cannady"},
        {"A. 1969", "B.1978", "C. 1985", "D.1990"},
        {"A.Yes", "B.No", "Somtimes", "Dont Know"},
        {"A. B", "B. C+", "C. B++", "D. C"},
        {"A.OOP", "B. Web Designing Features", "C. Simplicity", "D. Faster Execution"}};

    char AnswerKey[] = {'B', 'C', 'B', 'D', 'A'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "**********************\n";
        cout << questions[i] << endl;
        cout << "**********************\n";

        for (int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << endl;
        }
        cout << "Enter your Choice : ";
        cin >> guess;
        guess = toupper(guess);

        if (guess == AnswerKey[i])
        {
            cout << "CORRECT\n";
            score++;
        }
        else
        {
            cout << "WRONG\n";
            cout << "Correct Answer : " << AnswerKey[i] << endl;
        }
    }

    cout << "**********************\n";
    cout << "RESULTS\n";
    cout << "**********************\n";
    cout << "Correct Guesses :  " << score << endl;
    cout << "# Questions : " << size << endl;
    cout << "Percentage : " << (score / (double)size) * 100 << "%" << endl;

    return 0;
}