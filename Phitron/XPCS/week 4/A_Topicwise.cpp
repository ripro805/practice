#include <bits/stdc++.h>
using namespace std;

int main() {
    string num;
    cin >> num;

    string int_part = "", frac_part = "";
    bool flag = false;

    for (char ch : num) {
        if (ch == '.') {
            flag = true;
            continue;
        }
        if (!flag) int_part += ch;
        else frac_part += ch;
    }

    if (int_part.back() == '9') {
        cout << "GOTO Vasilisa." << endl;
        return 0;
    }

    if (frac_part[0] >= '5') {
        int last_digit = int_part.back() - '0';
        last_digit++;
        int_part.back() = char(last_digit + '0');
    }

    cout << int_part << endl;
    return 0;
}
