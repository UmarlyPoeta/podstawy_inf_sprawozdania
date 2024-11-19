#include <iostream>
#include <sstream>
#include <bitset>
#include <string>
#include <cmath>

std::string DecToBin(int decimal) {
    return std::bitset<32>(decimal).to_string();
}

std::string DecToHex(int decimal) {
    std::stringstream ss;
    ss << std::hex << decimal;
    return ss.str();
}

int BinToDec(const std::string& binary) {
    return std::stoi(binary, nullptr, 2);
}

std::string BinToHex(const std::string& binary) {
    int decimal = BinToDec(binary);
    return DecToHex(decimal);
}

std::string OctToBin(const std::string& octal) {
    int decimal = std::stoi(octal, nullptr, 8);
    return DecToBin(decimal);
}

int HexToDec(const std::string& hex) {
    int decimal;
    std::stringstream ss;
    ss << std::hex << hex;
    ss >> decimal;
    return decimal;
}

std::string OctToHex(const std::string& octal) {
    int decimal = std::stoi(octal, nullptr, 8);
    return DecToHex(decimal);
}

int main() {

    std::cout << "113 dziesiętnie to " << DecToBin(113) << " binarnie" << std::endl;
    std::cout << "432 dziesiętnie to " << DecToBin(432) << " binarnie" << std::endl;

    //1b
    std::cout << "555 dziesiętnie to " << DecToHex(555) << " szesnastkowo" << std::endl;
    std::cout << "8736 dziesiętnie to " << DecToHex(8736) << " szesnastkowo" << std::endl;

    //1c
    std::cout << "10011 binarnie to " << BinToDec("10011") << " dziesiętnie" << std::endl;
    std::cout << "101001011 binarnie to " << BinToDec("101001011") << " dziesiętnie" << std::endl;

    //1d
    std::cout << "D5E7 szesnastkowo to " << HexToDec("D5E7") << " dziesiętnie" << std::endl;
    std::cout << "F01A33 szesnastkowo to " << HexToDec("F01A33") << " dziesiętnie" << std::endl;

    //1e
    std::cout << "752 ósemkowo to " << OctToHex("752") << " szesnastkowo" << std::endl;
    std::cout << "2641 ósemkowo to " << OctToHex("2641") << " szesnastkowo" << std::endl;

    return 0;
}
