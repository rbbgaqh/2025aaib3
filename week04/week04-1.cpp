///week04-1.cpp
///複習vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; ///伸縮自如的陣列 沒有初始化的大小
    cout<<"a的長度是"<<a.size()<< endl; ///一開始大小是0

    a.push_back(99); ///下面還有很多
    cout<<"a的長度變" <<a.size()<< endl;

    vector<int> b(3);///伸縮自如的陣列長度是3裡面都是0
    cout<<"b的長度是"<<b.size()<< endl;

    b.push_back(99);///最後面加1個99
    for(int i=0;i<b.size();i++) cout << b[i] << ' ';/// 0 0 0 99
    cout<<"經過.push_back(99)後變長了"<<endl;

    vector<int> c(3,88);///伸縮自如的陣列長度是3
    for(int i=0; i<c.size();i++)cout<<c[i]<<' ';///88 88 88
    cout<<"初始化(3,88)就會試3個88"<<endl;
    ///下面還有很多 換下一個作業 不要一次放太多
}
