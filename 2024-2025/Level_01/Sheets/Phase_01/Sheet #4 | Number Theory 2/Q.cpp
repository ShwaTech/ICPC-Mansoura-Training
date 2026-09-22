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

vector<ll> Get_Divisors (ll n) {
    vector<ll> divisors;

    for (ll i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (i * i != n) {
                divisors.push_back(n / i);
            }
        }
    }

    return divisors;
}


ll LCM (ll a, ll b) {
    return a / __gcd(a, b) * b;
}


int main()
{
    ShwaTech

    ll x;
    while (cin >> x) {
        if (!x) break;

        vector<ll> divisors = Get_Divisors(x);

        ll ans=0;
        for (ll i = 0; i < divisors.size(); i++) {
            for (ll j = i; j < divisors.size(); j++) {
                if (LCM(divisors[i], divisors[j]) == x) {
                    ans++;
                }
            }
        }

        cout << x << " " << ans << nl;
    }

    return 0;
}

