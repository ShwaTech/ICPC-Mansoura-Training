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
        int n; cin >> n;

        vector<int> a(n), b(n);
        for (int &ai: a) cin >> ai;
        for (int &bi: b) cin >> bi;

        int m; cin >> m;
        vector<int> x(m);
        map<int, int> cnt;
        for (int &xi: x) {
            cin >> xi;
            cnt[xi]++;
        }

        bool ok = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] == b[i]) continue;

            if (cnt[b[i]] > 0) cnt[b[i]]--;
            else {
                ok = false;
                break;
            }
        }

        bool found = false;
        for (int i = 0; i < n; ++i) {
            if (b[i] == x[m-1]) found = true;
        }

        cout << (ok && found ? "YES\n" : "NO\n");
    }

    return 0;
}

