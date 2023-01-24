#include <iostream>
#include <string>

std::string encrypt(const std::string& plaintext, const std::string& key) {
    std::string ciphertext;
    for (int i = 0; i < plaintext.size(); i++) {
        ciphertext += plaintext[i] ^ key[i % key.size()];
    }
    return ciphertext;
}

std::string decrypt(const std::string& ciphertext, const std::string& key) {
    return encrypt(ciphertext, key);
}

int main() {
    std::string plaintext;
    std::string key;
    std::cout << "Enter a message to encrypt: ";
    std::getline(std::cin, plaintext);
    std::cout `oaicite:{"index":0,"invalid_reason":"Malformed citation << \"Enter a key: \";\n    std::cin >>"}` key;

    std::string ciphertext = encrypt(plaintext, key);
    std::cout << "Encrypted message: " << ciphertext << std::endl;
    std::cout << "Decrypted message: " << decrypt(ciphertext, key) << std::endl;

    return 0;
}
