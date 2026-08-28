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
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

const int MAX=1e8;

void SieveOfEratosthenes (ll n) {
    vector<bool> is_prime(n, true);

    is_prime[0] = is_prime[1] = false;

    for (ll i = 2; i*i < n; i++) {
        if (is_prime[i]) {
            for (ll j = i*i; j < n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    ll cnt=0;
    for (ll i = 2; i < n; i++) {
        if (is_prime[i]) {
            if (cnt % 100 == 0) cout << i << nl;
            cnt++;
        }
    }
}

int main()
{
    ShwaTech

    SieveOfEratosthenes(MAX);

    return 0;
}
