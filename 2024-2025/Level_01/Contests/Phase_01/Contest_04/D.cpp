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


int n, k;

bool Can(vector<int> &a, ll expected_x) {
    ll left_side=0;
    for (int i = 0; i < n; i++) {
        left_side += a[i] / expected_x;
    }
    left_side = sqrt(left_side);

    if (left_side >= k) return true;
    return false;
}


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        cin >> n >> k;

        vector<int> a(n);
        for (auto &ai: a) cin >> ai;

        ll L=1, R=1e18, ans=-1;
        while (L <= R) {
            ll mid = L + (R - L) / 2;

            if (Can(a, mid)) {
                ans = mid;
                L = mid + 1;
            } else {
                R = mid - 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}

