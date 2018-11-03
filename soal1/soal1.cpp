#include<iostream>
using namespace std;

int main()
{
    int a, b, x, y;
    cout<<"Input A : ";
    cin>>a;
    cout<<"Input B : ";
    cin>>b;
    cout<<endl;
    x=a;
    y=b;
    while(x!=y) {
        if(x<y) {
            x = x+a;
        }else
            y = y+b;
    }

    cout<<x;

return 0;
}
