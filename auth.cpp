#include "auth.h"
#include <string>
#include <algorithm>

// Simple XOR decryption (just for basic obfuscation)
std::string xorDecrypt(const std::string& data, char key = 'K') {
    std::string result = data;
    for (char& c : result) {
        c ^= key;
    }
    return result;
}

bool checkPassword(const std::string& input) {
    // XOR-encrypted "easyctf2025"
    std::string encrypted = "\x2e\x2a\x36\x34\x2c\x2c\x2f\x0f\x3b\x3e\x3e";
    std::string decrypted = xorDecrypt(encrypted);
    return input == decrypted;
}