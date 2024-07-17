#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int>a={5,8,9,6,10};
    int max=*max_element(a.begin(),a.end());
    cout<<"maximum number is: "<<max;
  
    return 0;
}