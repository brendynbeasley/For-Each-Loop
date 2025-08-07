#include <iostream>

int main (){

    int grades[] = {90, 85, 70, 60, 50};

    for(int grade : grades)
    {
        std::cout << grade << '\n';
    }


    return 0;
}
