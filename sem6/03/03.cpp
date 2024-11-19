#include <iostream>
#include <string>
#include <sstream>



int HexToDec(const std::string& hex) {
    int decimal;
    std::stringstream ss;
    ss << std::hex << hex;
    ss >> decimal;
    return decimal;
}

std::string DecToHex(int decimal) {
    std::stringstream ss;
    ss << std::hex << decimal;
    return ss.str();
}

std::string OctToHex(const std::string& octal) {
    int decimal = std::stoi(octal, nullptr, 8);
    return DecToHex(decimal);
}


int main(){
    // Hex to Dec
    std::cout << "B5 szesnastkowo to " << HexToDec("B5") << " dziesiętnie" << std::endl;

    // Oct to Hex
    std::cout << "16 ósemkowo to " << OctToHex("16") << " szesnastkowo" << std::endl;

    return 0;
}