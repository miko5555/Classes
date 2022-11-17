#include <iostream>
using namespace std;

class CoffeeMachine
    {

    private:
        int m_nCount;
        const char* m_aProducts_Names;
        const char* m_aProducts_Prises;
    public:
        CoffeeMachine()
        : m_nCount(0)
        , m_aProducts_Names(new char [m_nCount])    
        , m_aProducts_Prises(new char [m_nCount])    
        {
        cout<<" CoffeeMachine()"<endl;
        }
void printPriceList()
        {
        cout<<
        }
        ~CoffeeMachine()
        {
        delete [] m_aProducts_Names;
        delete [] m_aProducts_Prises;
        }
    };
int main(){


}
