#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v4(10);

    for(int i=0; i < 10; i++)
        cout << v4[i] << " " ;

    cout<<endl;
    
    v4.assign(20, 2);
    for(int i=0; i < 20; i++)
        cout << v4[i] << " " ;

    return 0;
}