/// week01-4a.cpp 使用C++語言寫
#include <iostream> ///使用C語言外掛
using namespace std;
int main()
{
    int a,b;
   cin >> a >> b;使用C語言得命名改寫
    int ans = 0;
    for(int i=a; i<=b; i++){
        if(i%3==0) ans+= i;
        }
        cout << ans;
    }
