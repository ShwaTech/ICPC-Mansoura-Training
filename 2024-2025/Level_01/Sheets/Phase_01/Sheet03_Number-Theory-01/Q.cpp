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

const int MAX = 2e5;


vector<int> Sieve (int n) {
    vector<bool> isPrime (n+1, true);

    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i*i <= n; i++) {
        if (isPrime[i]) {
            for (ll j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (ll i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}


int main()
{
    ShwaTech

    vector<int> primes = Sieve(MAX);

    int n, m; cin >> n >> m;

    vector<vector<int>> a(n , vector<int>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int x; cin >> x;

            a[i][j] = *lower_bound(All(primes), x) - x;
        }
    }

    ll ans=LLONG_MAX;

    for (int i = 0; i < n; ++i) {
        ll row = 0;
        for (int j = 0; j < m; ++j) {
            row += a[i][j];
        }
        ans = min(ans, row);
    }

    for (int j = 0; j < m; ++j) {
        ll column = 0;
        for (int i = 0; i < n; ++i) {
            column += a[i][j];
        }
        ans = min(ans, column);
    }

    cout << ans;


    return 0;
}

