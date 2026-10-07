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

const int N = 1e6;
const int MAX = 1e6+5;

vector<int> Sieve (int n) {
    vector<int> least_prime(n+1);

    for (int i = 2; i <= n; i++) {
        least_prime[i] = i;
    }

    for (int i = 2; i <= n; i++) {
        if (least_prime[i] == i) {
            for (ll j = 1LL * i * i; j <= n; j += i) {
                least_prime[j] = i;
            }
        }
    }

    return least_prime;
}

int Prime_Factorization (int n, vector<int> &primes) {
    int c=0;

    while (n != 1) {
        int p = primes[n];

        c++;

        while (n % p == 0) {
            n /= p;
        }
    }

    return c;
}


int main()
{
    ShwaTech

    vector<int> least_prime = Sieve(N);

    vector<int> cnt_primes(N+1);
    for (int i = 2; i <= N; ++i) {
        cnt_primes[i] = Prime_Factorization(i, least_prime);
    }

    vector<ll> ans(MAX);
    for (ll gcd = 1; gcd <= N; ++gcd) {
        for (ll x = 2 * gcd; x <= N; x += gcd) {
            ll ab = x * gcd - gcd * gcd;

            if (ab < 0) continue;
            if (ab % gcd != 0) continue;

            ab /= (gcd * gcd);

            ll cnt = cnt_primes[ab];
            ll tmp = (1LL << cnt) / 2;

            if (ab == 1) ans[x]++;
            else ans[x] += tmp;
        }
    }

    int T; cin >> T;
    while (T--) {
        ll x; cin >> x;

        if (x == 1) cout << 0 << nl;
        else cout << ans[x] << nl;
    }

    return 0;
}

