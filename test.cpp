#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <map>
#include <random>
#include <memory>
#include <set>
#include <stack>
#include <boost/asio.hpp>
using namespace std;

//int main() {
//
//    vector<string> ss;
//    for(int i = 0; i < 10; ++i) {
//        string s;
//        cin >> s;
//        ss.push_back(s);
//    }
//
//    for(int i = 0; i < 10; ++i) {
//        string s = ss[i];
//        int n = s.size();
//        vector<int> rr(n + 1);  // r后缀
//        vector<int> bl(n + 1);  // b前缀
//
//        vector<int> rl(n + 1);  // r前缀
//        vector<int> br(n + 1);  // b后缀
//
//        bl[1] = s[0] == 'b' ?  1 : 0;
//        rl[1] = s[0] == 'r' ?  1 : 0;
//        for(int i = 1; i < n; ++i){
//            bl[i + 1] = bl[i];
//            rl[i + 1] = rl[i];
//            s[i] == 'r' ? rl[i + 1] += 1 : bl[i + 1] += 1;
//        }
//        for(int i = n - 1; i >= 0; --i){
//            rr[i] = rr[i + 1];
//            br[i] = br[i + 1];
//            s[i] == 'r' ? rr[i] += 1 : br[i] += 1;
//        }
//
//        int ans = INT_MAX;
//        for(int i = 0; i <= n; ++i){
//            ans = min({ans, rr[i] + bl[i], rl[i] + br[i]});
//        }
//        cout << ans << endl;
//    }
//
//        cout << "-----------" << endl;
//    for(int i = 0; i < 10; ++i) {
//        string s = ss[i];
//        int n = s.size();
//        vector<int> dp(4, 0);
//        // dp[0] 全红
//        // dp[1] 全蓝
//        // dp[2] 红蓝
//        // dp[3] 蓝红
//
//        for(auto& c : s) {
//            if(c == 'r') {
//                dp[3] = min(dp[1], dp[3]);
//                dp[2] = min(dp[2] + 1, dp[0]);
//                dp[1] = dp[1] + 1;
//            }
//            else {
//                dp[3] = min(dp[1], dp[3] + 1);
//                dp[2] = min(dp[0], dp[2]);
//                dp[0] = dp[0] + 1;
//            }
//        }
//
//        int ans = min({dp[0], dp[1], dp[2], dp[3]});
//        cout << ans << endl;
//    }


//    vector<int> rr(n + 1);  // r后缀
//    vector<int> bl(n + 1);  // b前缀
//
//    vector<int> rl(n + 1);  // r前缀
//    vector<int> br(n + 1);  // b后缀
//
//    bl[1] = s[0] == 'b' ?  1 : 0;
//    rl[1] = s[0] == 'r' ?  1 : 0;
//    for(int i = 1; i < n; ++i){
//        bl[i + 1] = bl[i];
//        rl[i + 1] = rl[i];
//        s[i] == 'r' ? rl[i + 1] += 1 : bl[i + 1] += 1;
//    }
//    for(int i = n - 1; i >= 0; --i){
//        rr[i] = rr[i + 1];
//        br[i] = br[i + 1];
//        s[i] == 'r' ? rr[i] += 1 : br[i] += 1;
//    }
//
//    int ans = INT_MAX;
//    for(int i = 0; i <= n; ++i){
//        ans = min({ans, rr[i] + bl[i], rl[i] + br[i]});
//    }
//    cout << ans << endl;
//}



//    int n;
//    string s;
//    cin >> n;
//    s.resize(n);
//    cin.ignore();
//    getline(cin, s);



//    string s;
//    s = "rbrbrbrrrrbbbbrrrrbbbbrrbbb";
//    int n = s.size();
//
//    vector<int> rr(n + 1);  // r后缀
//    vector<int> bl(n + 1);  // b前缀
//
//    vector<int> rl(n + 1);  // r前缀
//    vector<int> br(n + 1);  // b后缀
//
//    bl[1] = s[0] == 'b' ?  1 : 0;
//    rl[1] = s[0] == 'r' ?  1 : 0;
//    for(int i = 1; i < n; ++i){
//        bl[i + 1] = bl[i];
//        rl[i + 1] = rl[i];
//        s[i] == 'r' ? rl[i + 1] += 1 : bl[i + 1] += 1;
//    }
//    for(int i = n - 1; i >= 0; --i){
//        rr[i] = rr[i + 1];
//        br[i] = br[i + 1];
//        s[i] == 'r' ? rr[i] += 1 : br[i] += 1;
//    }
//
//    int ans = INT_MAX;
//    for(int i = 0; i <= n; ++i){
//        ans = min({ans, rr[i] + bl[i], rl[i] + br[i]});
//    }
//    cout << ans << endl;


//int T;
//int a1, b1, c1, a2, b2, c2;
//cin >> T;
//while(T--) {
//cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
//long long  cnt1 = (c1 / a1 + c1 % a1 == 0 ? 0 : 1) * b1;
//long long  cnt2 = (c2 / a2 + c2 % a2 == 0 ? 0 : 1) * b2;
//if (cnt1 > cnt2) {
//cout << "B" << endl;
//} else if (cnt1 < cnt2) {
//cout << "A" << endl;
//} else {
//cout << "A&B" << endl;
//}
//}

//bool isSame(vector<string>& big, vector<string>& sma, int x, int y, int n){
//    for(int i = 0; i < n; ++i){
//       for(int j = 0; j < n; ++j){
//           if(big[x + i][y + j] != sma[i][j]){
//               return false;
//           }
//       }
//    }
//    return true;
//}
//
//
//void solve(vector<string>& big, vector<string>& sma, int m, int n) {
//    for(int i = 0; i <= m - n; ++i) {
//        for(int j = 0; j <= m - n; ++j) {
//            if(big[i][j] == sma[0][0] && isSame(big, sma, i, j, n)) {
//                cout << "YES" << endl;
//                return;
//            }
//        }
//    }
//    cout << "NO" << endl;
//}
//
//int main() {
//    int T;
//    cin >> T;
//
//    while(T--) {
//        int m; int n;
//        vector<string> big, sma;
//        cin >> m >> n;
//        cin.ignore();
//        for(int i = 0; i < m; ++i) {
//            string s;
//            getline(cin, s);
//            big.push_back(s);
//        }
//        for(int i = 0; i < n; ++i) {
//            string s;
//            getline(cin, s);
//            sma.push_back(s);
//        }
//        solve(big, sma, m, n);
//    }
//    return 0;
//}

//constexpr int MOD = 998244353;
//int main() {
//    int n;
//    cin >> n;
//    int a1, b1, a2, b2;
//    cin >> a1 >> b1 >> a2 >> b2;
//    a1--, a2--, b1--, b2--;
//    set<pair<int, int>> ust;
//    ust.insert({a1, b1});
//    ust.insert({a2, b2});
//    vector<int> dp(n, 1);
//    if( a1 == 0 && b1 == 0 || a1 == n - 1 && b1 == n - 1 ||
//        a2 == 0 && b2 == 0 || a2 == n - 1 && b2 == n - 1) {
//        return 0;
//    }
//    if(a1 == 0)dp[b1] = 0;
//    if(a2 == 0)dp[b2] = 0;
//
//    for(int i = 1; i < n; ++i) {
//        if(ust.count({i, 0})) dp[0] = 0;
//        for(int j = 1; j < n; ++j) {
//           if(ust.count({i, j})) dp[j] = 0;
//           else {
//               dp[j] = (dp[j - 1] + dp[j]) % MOD;
//           }
//        }
//    }
//    cout << dp[n - 1] << endl;
//    return 0;
//}

// 括号有效的最长前缀长度
//int main() {
//    int n;
//    cin >> n;
//    string s;
//    cin >> s;
//    stack<char> st;
//    int ans = 0, temp = 0;
//    for(int i = 0; i < n; ++i) {
//        if (s[i] == '(') st.push('(');
//        else {
//            if (st.empty()) {
//                break;
//            }
//            else {
//                st.pop();
//                temp += 2;
//                if(st.empty())  // 如果栈空，则说明是前缀
//                    ans = max(ans, temp);
//            }
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}


//int main() {
//    string a;
//    string b;
//    getline(cin, a);    // 输入a
//    getline(cin, b);    // 输入b
//
//    int n1 = a.size(), n2 = b.size();
//
//    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1));    // 二维dp矩阵
//    for (int i = 0; i < n1; ++i) {
//        for (int j = 0; j < n2; ++j) {
//            if (a[i] == b[j]) {
//                dp[i + 1][j + 1] = dp[i][j] + 1;
//            }
//            else {
//                dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
//            }
//        }
//    }
//    cout << dp[n1][n2] * 2;
//}
//int f(int a) {      // 计算阶乘
//    if(a == 0) return 0;
//    int res = 1;
//    while(a > 1) {
//        res *= a;
//        --a;
//    }
//    return res;
//}
//
//void dfs(vector<int>& v, int i, int n, int& cnt, int& moon, int& time) {
//    if(i == n) {    // 遍历到末尾返回
//        if(time == 60)cnt += f(moon) * f(n - moon); // 上午时间总和为60就进行统计
//        return;
//    }
//    if(time > 60) return;   // 剪枝
//
//    // 对每个i分在上午和下午两种情况
//
//    // v[i]在上午
//    time += v[i];
//    ++moon;
//    dfs(v, i + 1, n, cnt, moon, time);
//
//    // v[i]是下午
//    time -= v[i];
//    --moon;
//    dfs(v, i + 1, n, cnt, moon, time);
//    return ;
//}
//
//
//
//int main() {
//    int N;
//    cin >> N;
//    vector<int> v(N, 0);
//    for(int i = 0; i < N; ++i) {
//        int temp = 0;
//        cin >> temp;
//        v[i] = temp;
//    }
//
//    int cnt = 0;
//    int moon = 0, time = 0;  // moon记录早上时间总和， time记录早上数量
//    dfs(v, 0, N, cnt, moon, time);  // 深搜
//
//    cout << cnt << endl;
//
//}

class A{
    public:

    void f(){
        cout << "f()" << endl;
    }
};


int main(){
    string a = "avf";
    const int len = a.size();
    cout << a.size() << endl;
}