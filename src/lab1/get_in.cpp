#include<iostream>

template<typename T, typename U>

void get_in(T &x, U s) {
    std::cout << s;
    std::cin >> x;
}

int main() {
    
    int x;
    get_in(x, "Enter a number: ");
    std::string s;
    get_in(s,"What is your name? ");
    
    std::cout << x << s << std::endl;
    return 0;
}

