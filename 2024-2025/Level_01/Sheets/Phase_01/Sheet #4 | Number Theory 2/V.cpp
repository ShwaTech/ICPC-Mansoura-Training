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

const int MOD=1e9+7;


ll Quick_Power (ll base, ll n, ll mod) {
    ll res=1;

    while (n) {
        if (n & 1) {
            res *= base;
            res %= mod;
            n--;
        } else {
            base *= base;
            base %= mod;
            n >>= 1;
        }
    }

    return res;
}


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        ll l, r, k; cin >> l >> r >> k;

        ll cnt = 9 / k + 1;

        ll ans = Quick_Power(cnt, r, MOD) - Quick_Power(cnt, l, MOD);

        cout << (ans + MOD) % MOD << nl;
    }

    return 0;
}

