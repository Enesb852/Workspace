#include <iostream>
#include <vector>

using namespace std;

int main()
{   
    vector<int> v2(10); // istediğimiz boyutta bir vektör oluşturabiliriz.
    cout << v2.size() << endl;

    /* for(int i=0; i<10; i++)
        cout << v2[i] << " ";
    */

    vector<int> v3(5,-2);
    cout << v3.size() << endl;
    
    for(int i=0; i<5; i++)
        cout << v3[i] << " ";
    
    return 0;
}