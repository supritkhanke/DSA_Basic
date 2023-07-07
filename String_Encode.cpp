#include <iostream>
#include <string>
#include <locale>
#include <codecvt>

int main() {
    // Input string
    std::string inputString = "Hello, world!";

    // Convert string from UTF-8 to UTF-16
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring utf16String = converter.from_bytes(inputString);

    // Output the encoded string
    std::wcout << utf16String << std::endl;

    return 0;
}
