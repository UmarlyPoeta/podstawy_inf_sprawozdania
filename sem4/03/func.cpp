
bool koniunkcja(bool p1, bool p2){
    return p1 && p2;
}

bool alternatywa(bool p1, bool p2){
    return p1 || p2;
}

bool negacja(bool p){
    return !p;
}

bool rownowaznosc(bool p1, bool p2){
    return p1 == p2;
}

bool implikacja(bool p1, bool p2){
    if (!p1 && p2){
        return true;
    }
    return p1 == p2;
}
