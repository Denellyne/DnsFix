#include <iostream>
#include <windows.h>

int main(){
    std::string input;
    using std::cout;
    system("ipconfig /flushdns");
    system("ipconfig /release");
    system("ipconfig /renew");
    cout << "Done , You may now close the file";
    std::cin >> input;
    return 0;
}


