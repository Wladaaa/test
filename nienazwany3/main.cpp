#include <iostream>
#include<TLibrary.h>

using namespace std;

int main()
{
    TLibrary new_lb("Nowa");
    new_lb.setData("Ksiazka","2121");
     cout<<"a";
    new_lb.printData();
    return 0;
}
