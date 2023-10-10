#include <iostream>
#include <string>



using namespace std;



string encode(const string s, int j) {
    string encoded = "";
    for (size_t i = 0; i < s.length(); ++i) {
        if (i < static_cast<size_t>(j)) {
            encoded += s[i];
        } else {
            encoded += static_cast<char>(s[i] + 3);
        }
    }
    return encoded;
}



string decode(const string encoded) {
    string decoded = "";
    for (char c : encoded) {
        decoded += static_cast<char>(c - 3);
    }
    return decoded;
}



int main() {
    string original_string = "formation";
   int offset = 2;



    string encoded_string = encode(original_string, offset);
    cout << "Encoded string: " << encoded_string << endl;



    string decoded_string = decode(encoded_string);
    cout << "Decoded string: " << decoded_string << endl;



    return 0;
}
