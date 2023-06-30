#include <iostream>
#include <sstream>
#include <vector>

std::string reverseWords(std::string str) {
    std::stringstream s(str);
    std::string word;

    // to store words
    std::vector<std::string> temp;
    // to store the ans
    std::string ans = "";

    while (s >> word) {
        temp.push_back(word);
    }
    // now store the words in reverse order and add the extra space at the end of each word except the first one

    for (int i = temp.size() - 1; i >= 0; i--) {
        if (i != 0)
            ans += temp[i] + " ";
        else
            ans += temp[i];
    }
    return ans;
}

int main() {
    std::string sentence = "Hello world!";
    std::string reversed = reverseWords(sentence);
    std::cout << reversed << std::endl;
    return 0;
}
