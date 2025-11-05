/// week07-2.cpp
/// 657. Robot Return to Origin 模擬機器人走路
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0; // 一開始的位置,在 (0,0)
        // for (int i=0; i<moves.length();i++){ //傳統for迴圈
        //      char c = move[i];
        for (char c : moves){ // C++ 進階迴圈
            if (c=='U'){
                y++;
            }   else if (c=='D'){
                y--;
            }   else if (c=='L'){
                x--;
            }   else if (c=='R'){
                x++;
            }
        } //離開迴圈後
        if (x==0 && y==0) return true;
        else return false;
    }
};
