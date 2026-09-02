/*
لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
استغفر الله العظيم الذي لا إلاه إلا هو الحي القيوم وأتوب اليه
سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
سبحان الله وبحمده، سبحان الله العظيم
اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
لا إلاه إلا الله وحده هو يتولي الصالحين
لا إلاه إلا الله وحده هو يهدي السبيل
ربي إني ظلمت نفسي، فاغفر لي
ربي إني لما أنزلت اليّ من خيرٍ فقير
حسبي الله لا إلاه إلا هو عليه توكلت وهو رب العرش العظيم
بسم الله نبدأ وعليه نتوكل
*/

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define ld long double
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;



int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n, k; cin >> n >> k;

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;

            freq[x]++;
        }

        vector<int> distinct;
        for (auto [val, frq]: freq) {
            if (frq >= k) distinct.push_back(val);
        }

        if (distinct.empty()) {
            cout << -1 << nl;
            continue;
        }

        int L=0, R=1, ans=1, ansL=distinct[0], ansR=distinct[0];
        while (R < distinct.size()) {
            if (distinct[R] == distinct[R-1] + 1) {
                R++;

                if (R - L > ans) {
                    ans = R - L;
                    ansL = distinct[L];
                    ansR = distinct[R-1];
                }
            } else {
                L = R; R++;

                if (R - L > ans) {
                    ans = R - L;
                    ansL = distinct[L];
                    ansR = distinct[R-1];
                }
            }
        }

        cout << ansL << " " << ansR << nl;
    }

    return 0;
}

