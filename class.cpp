#include <iostream>
#include <string>
using namespace std;




class CoffeeMachine
    {

    public:
		int m_nCount;
        string m_sProducts_name;
        int m_nPrice;
        string* m_aProducts_Names;
        int* m_aProducts_Prises;
    public:

        CoffeeMachine()
        : m_sProducts_name("prise name" )
        , m_nPrice(0)
        , m_aProducts_Names(new string [m_nCount])    
        , m_aProducts_Prises(new int [m_nCount])
		, m_nCount(0)    
        {

        }

        CoffeeMachine (string sProd_name, int Price, int Count)
        : m_sProducts_name ( "prise name" )
        , m_nPrice(0)
        , m_aProducts_Names (new string [m_nCount])    
        , m_aProducts_Prises (new int [m_nCount])    
		, m_nCount(0)    
        	{
			m_nCount = Count;
			m_nPrice = Price;
			m_sProducts_name = sProd_name;
			m_aProducts_Prises [ m_nCount ] = m_nPrice;
        	}

void printPriceList()
        {
		cout << m_sProducts_name <<" "<< m_nPrice <<" "<< endl;
		cout << m_aProducts_Prises [ m_nCount ] << endl;
        }

        ~CoffeeMachine()
        	{
        	delete [] m_aProducts_Names;
        	delete [] m_aProducts_Prises;
       	 	}
    };
int main(){
    
CoffeeMachine coffe( "Espreso", 200, 5);
CoffeeMachine coffe1;
coffe1.printPriceList();
coffe.printPriceList();


}
