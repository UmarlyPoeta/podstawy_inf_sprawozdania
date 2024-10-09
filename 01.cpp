#include <iostream>



int main(void){
    int rok;
    std::cout << "podaj rok: ";
    std::cin >> rok;
    if ((rok % 4 == 0) && ((rok % 100 != 0) || (rok % 400 == 0))){
        std::cout << "jest przestepny" << std::endl;
    }
    else{
        std::cout << "nie jest przestepny" << std::endl;
    }
    return 0;
}