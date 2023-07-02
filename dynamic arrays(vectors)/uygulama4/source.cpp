#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> v5 = {1, 2, 3, 4, 5};

    cout << v5.back() << endl; // vektörün son elemanına bu şekilde ulaşabiliriz.

    if(v5.empty())
        cout << "vector is empty." << endl; 
    else
        cout << "vector is not empty" << endl;

    return 0;
}