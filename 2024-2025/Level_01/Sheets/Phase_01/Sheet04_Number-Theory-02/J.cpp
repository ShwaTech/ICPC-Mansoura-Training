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

const ll mod = 1e9+7;

vector<ll> Sieve (int n) {
    vector<ll> least_prime(n+1);

    for (ll i = 2; i <= n; i++) {
        least_prime[i] = i;
    }

    for (ll i = 2; i*i <= n; i++) {
        if (least_prime[i] == i) {
            for (ll j = i*i; j <= n; j += i) {
                least_prime[j] = i;
            }
        }
    }

    return least_prime;
}

int main()
{
    ShwaTech

    vector<ll> LP = Sieve(1e7);

    int n; cin >> n;

    map<ll, ll> freq;

    for (int i = 0; i < n; ++i) {
        ll x; cin >> x;

        while (x != 1) {
            freq[LP[x]]++;
            x /= LP[x];
        }
    }

    ll ans=1;
    for (auto [pf, frq] : freq) {
        ans *= (frq + 1)  % mod;
        ans %= mod;
    }

    cout << ans;

    return 0;
}

