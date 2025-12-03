// week13-4.cpp 聖誕節倒數盲目程式 Advent of Code 2025
// 第一天 --- Day 1: Secret Entrance --- 神祕的入口
// 我們利用 LeetCode 裡面的 My Playground 我的遊戲場 可以寫程式（右下角放 stdin 輸入）
// LeetCode 會幫我們 #include 全部的東西，所以前面什麼都不用寫

int main() {
    char c;      // 每一行，有一個英文字
    int d;       // 有一個數字
    int now=50;
    int ans=0;
    while ( cin >> c >> d ) {
        //if (c == 'L') cout << "往左轉 " << d << " 格\n";
        //if (c == 'R') cout << "往右轉 " << d << " 格\n";

        if(c=='L') now-=d;
        if(c=='R') now+=d;

        now=(now%100+100)%100;
        if(now==0) ans++;
        //cout<<"現在到格子刻度"<<now<<"\n";
    }
    cout<<"答案是"<<ans;
}
// 先把題目的 Input 貼到右下角
/*
L68
L30
R48
L5
R60
L55
L99
L14
L82
*/
