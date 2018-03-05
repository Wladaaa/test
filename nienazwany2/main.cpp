#include <iostream>
#include <TUniversity.h>
#include<TStudent.h>

using namespace std;

int main()
{
    string pom;
    pom="sasa";
    TUniversity uni(pom);
    uni.setData("a",12);
    uni.printData();
    return 0;
}
