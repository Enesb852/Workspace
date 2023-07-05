#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main() {
    
    int x=5;
    int y=7;

    std::cout << "Before swap - x: " << x << ", y: " << y << std::endl;
    swap(x, y);
    std::cout << "After swap - x: " << x << ", y: " << y << std::endl;
    
    return 0;
}