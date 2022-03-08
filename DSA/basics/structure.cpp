#include <iostream>
using namespace std;


struct rectangle
{
    int length;
    int height;
};

int main(){
    struct rectangle r={10,5};
    struct rectangle *P=&r;

    r.length=15;
    // (*P).height=10; too long
    P->height=10;
    cout<<r.length*r.height;

    return 0;

}