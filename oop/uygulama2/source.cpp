#include <iostream>

using namespace std;

class Nokta
{   
    private:
        int x, y;
    public:
        void degerAta(int _x, int _y)
        {
            x = _x;
            y = _y;
        }

        void ekranaYaz()
        {
            cout << "(" << x << "," << y << ")" << endl;
        }

        bool isOrigin()
            {return x==0 && y==0;}
};

int main()
{
    
    return 0;
}