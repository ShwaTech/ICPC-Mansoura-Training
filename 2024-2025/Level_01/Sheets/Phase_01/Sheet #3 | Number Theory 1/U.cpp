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


vector<ll> Prime_Factorization (ll n) {
    vector<ll> prime_factors;

    for (ll i = 2; i*i <= n; ++i) {
        while (n % i == 0) {
            prime_factors.push_back(i);
            n /= i;

            if (prime_factors.size() >= 3) break;
        }

        if (prime_factors.size() >= 3) break;
    }

    if (n > 1 && prime_factors.size() < 3) {
        prime_factors.push_back(n);
    }

    return prime_factors;
}


int main()
{
    ShwaTech

    ll q; cin >> q;

    vector<ll> prime_factors = Prime_Factorization(q);

    if (prime_factors.size() <= 1) {
        cout << "1\n0";
    } else if (prime_factors.size() == 2) {
        cout << "2";
    } else {
        cout << "1\n";
        cout << prime_factors[0] * prime_factors[1];
    }

    return 0;
}

