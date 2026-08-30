// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// لا الاه الا الله وحده هو يتولي الصالحين
// ربي اني ظلمت نفسي، فاغفر لي
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم
// بسم الله نبدأ وعليه نتوكل

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

const int MAX = 1e6+5;

vector<ll> Sieve (ll n) {
    vector<bool> is_prime(n+1, true);

    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    vector<ll> primes;
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}


int main()
{
    ShwaTech

    vector<ll> primes = Sieve(MAX);

    // If We Try To Recognize The Battern, we Will Find out that:
    // The Powers of any Prime Number Have 3 Distinct Divisors
    // e.g.  2  -->  2*2 = 4   -> (1, 2, 4)
    // e.g.  3  -->  3*3 = 9   -> (1, 3, 9)
    // e.g.  5  -->  5*5 = 25  -> (1, 5, 25)

    map<ll, bool> T_Prime;
    for (ll p: primes) {
        T_Prime[p * p] = true;
    }

    ll n; cin >> n;
    while (n--) {
        ll x; cin >> x;

        if (T_Prime.count(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

