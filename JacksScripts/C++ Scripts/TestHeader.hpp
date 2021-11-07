#include <iostream>
#include <string>

std::string waitin = " ";

int waitToClose(){
    
    std::cout << "type anything to end the program" << std::endl;
    std::cin >> waitin;
    
    if (waitin == "esc")
    {
        system("cls");
        return 0;
    }

}