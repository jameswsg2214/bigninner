#include <iostream>

using namespace std;
class Swap{
public:
    int x,y,z;
    int get()
    {
        cin>>x>>y;
        return 0;
    }
    int calc()
    {
        if(x<=100000 && y<=100000)
     {
     x=x^y;
     y=x^y;
     x=x^y;
     cout<<x<<y;}
     return 0;
    }
};
int main()
{
    Swap s;
    s.get();
    s.calc();
    return 0;
}
