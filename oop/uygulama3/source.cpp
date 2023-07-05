#include <iostream>

using namespace std;

namespace KediNamespace
{
    class Kedi
    {
        public:
            void miyavla(string name)
            {
                cout << name << " miyavladi!" << endl;
            }
    };
}

int main()
{
    KediNamespace::Kedi my_Cat;
    my_Cat.miyavla("minnos");

    return 0;
}