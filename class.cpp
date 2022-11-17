#include <iostream>
using namespace std;

class CoffeeMachine
    {

    public:
        string m_sProducts_name;
        int m_nCount;
        const char* m_aProducts_Names;
        const char* m_aProducts_Prises;
    public:
        CoffeeMachine(string sProducts_name)
        : m_sProducts_name("prise name" )
         , m_nCount(0)
        , m_aProducts_Names(new char [m_nCount])    
        , m_aProducts_Prises(new char [m_nCount])    
        {
        cout<<" CoffeeMachine()"<<endl;
        }
void printPriceList()
        {
        cout<<" "<<endl;
        }
        ~CoffeeMachine()
        {
        delete [] m_aProducts_Names;
        delete [] m_aProducts_Prises;
        }
    };
int main(){
    int x=3;
    int y=4;
CoffeeMachine st "name";
arrCoffe[4].m_nCount = 5;


}
