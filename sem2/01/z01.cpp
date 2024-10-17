#include <iostream>

int animals(int kurczaki, int krowy, int swinie){
    return (kurczaki * 2 + krowy * 4 + swinie * 4);
}


int main(void){
    int k, kr, s;
    std::cout << "podaj ilosc kurczakow, krow, swin oddzielając je spacją: ";
    std::cin >> k >> kr >> s;

    std::cout << "mozna zliczyc " << animals(k, kr, s) << " nog" << std::endl;

    return 0;
}