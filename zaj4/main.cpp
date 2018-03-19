#include <iostream>
#include<schematbernouliego.h>
#include<newton.h>
using namespace std;

int main()
{
    SchematBernouliego pom;
    float help=(1.0/6.0);
    double res = pom.useSchemat(2,help,3);
    cout<<res;
    return 0;
}
