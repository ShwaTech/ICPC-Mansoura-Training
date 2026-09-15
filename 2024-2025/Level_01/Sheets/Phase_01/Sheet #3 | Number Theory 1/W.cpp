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

const int MAX=1e6+1;


ll Prime_Factorization (ll n) {
    ll number_prime_factors=0;

    for (ll i = 2; i*i <= n; ++i) {
        while (n % i == 0) {
            number_prime_factors++;
            n /= i;
        }
    }

    if (n != 1) number_prime_factors++;

    return number_prime_factors;
}


int main()
{
    ShwaTech

    vector<ll> prefix(MAX, 0);

    for (int i = 2; i < MAX; ++i) {
        prefix[i] = Prime_Factorization(i) + prefix[i-1];
    }

    ll n;
    while (cin >> n) {
        cout << prefix[n] << nl;
    }

    return 0;
}

