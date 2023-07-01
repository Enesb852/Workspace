#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1; // v1 adında vektör oluşturduk

    cout << v1.size() << endl; // vektörün boyutunu öğrenebiliriz.

    v1.push_back(1000); // "push_back" işlevi ile vektöre yeni elemanlar eklenebilir.
    v1.push_back(20);
    
    cout << v1.size() << endl;

    return 0;
}