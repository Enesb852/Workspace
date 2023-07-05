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
    Nokta n1;
    Nokta* n2;
    n2=new Nokta();
    
    n1.degerAta(2,2);
    n1.ekranaYaz();
    
    n2->degerAta(7,4);
    n2->ekranaYaz(); // n2 pointer'ı üzerinden n1 nesnesinin değerleri ekrana yazdırılıyor

    if(n1.isOrigin())
        cout << "Baslangic noktasinda";
    
    delete n2;
    return 0;
}