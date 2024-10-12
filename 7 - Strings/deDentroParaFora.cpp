#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string text;
    cin >> n;
    getchar();

    for (int i = 0; i < n; i++) {
        getline(cin, text);

        int half = text.size() / 2;
        string converted = "";
        for (int j = 0; j < half; j++) {
            converted += text[half - j - 1];
        }
        for(int k = 0; k < half; k++){
            converted += text[text.size() - k - 1];
        }

        cout << converted << endl;
    }

    return 0;
}
