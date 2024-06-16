#include <iostream>
#include <cstdlib>
#include <cctype>
#include <ctime>

using namespace std;

string nerdify(string sentence);

int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    cout << nerdify(sentence);
    
    return 0;
    
}

string nerdify(string sentence){
    
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < sentence.length(); i++) {
        int j = rand() % 100 + 1;

        if (j <= 40) {
            sentence[i] = toupper(sentence[i]);
        }
    }

    return sentence;
}
