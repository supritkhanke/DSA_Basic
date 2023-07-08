#include <iostream>
#include <string>
using namespace std;

string generate(int n, bool zero) {
    string ans = "";
    if (n == 0) return ans;
    if (zero) {
        ans += '0';
        n--;
    } else {
        ans += '1';
        n--;
    }
    while (n != 0) {
        char temp = (ans[ans.size() - 1] == '0') ? '1' : '0';
        ans += temp;
        n--;
    }
    return ans;
}

int change(string str, string s, int n) {
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != s[0]) {
            ans++;
        }
    }
    return ans;
}

int makeBeautiful(string str) {
    int n = str.size();
    string g1 = generate(n, true);
    int diff1 = change(str, g1, n);

    string g2 = generate(n, false);
    int diff2 = change(str, g2, n);

    return min(diff1, diff2);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    int result = makeBeautiful(input);
    cout << "Minimum changes to make the string beautiful: " << result << endl;

    return 0;
}
