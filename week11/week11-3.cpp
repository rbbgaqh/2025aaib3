///week11-3.cpp
class Solution {
public:
    string addBinary(string a, string b) {
     int i = a.length() - 1, j = b.length() - 1; // 字串長度
vector<int> ans; // 儲存答案的陣列
int carry = 0; // 進位部分
while (i >= 0 || j >= 0) { // 要一直做加法，從最低位加，往左高數加
    int now = carry; // 現在的進位數
    if (i >= 0) { // 字串a還可以做加法
        now += a[i] - '0'; // 字串a的字元a[i]脫掉字元的外皮，變數值
        i--; // 加完了，在往左一位
    }
    if (j >= 0) { // 字串b還可以做加法
        now += b[j] - '0'; // 字串b的字元b[j]脫掉字元的外皮，變數值
        j--; // 往左一位
    }
    ans.push_back(now % 2); // 把進位的個位數，記在ans裡
    carry = now / 2; // 新的進位部分
}
if (carry > 0) ans.push_back(carry); // 離開迴圈後（直式加法）加完字串後，還有進位!!! 再記ans
string strAns = ""; // 最後呢? 需要把出來的字串，當答案
for (int i = ans.size() - 1; i >= 0; i--) { // 從來的回圈（因為ans裡，是記個位、十位，... 倒過來）
    strAns = strAns +(char) (ans[i] + '0'); // 把數字，變字元，再加到字串裡
}
return strAns;
    }
};
