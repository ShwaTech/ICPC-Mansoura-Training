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


vector<int> Divisors (int n) {
    vector<int> divisors;

    for (int i = 1; i*i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);

            if (i != n/i) {
                divisors.push_back(n/i);
            }
        }
    }

    return divisors;
}


int main()
{
    ShwaTech

    // All Beautiful Number Till 1e5 ??
    set<int> Beautiful { 1, 6, 28, 120, 496, 2016, 8128, 32640 };

    int n; cin >> n;

    vector<int> divisors = Divisors(n);

    sort(RAll(divisors));

    for (int divisor : divisors) {
        if (Beautiful.find(divisor) != Beautiful.end()) {
            cout << divisor;
            break;
        }
    }

    return 0;
}


// ---------------------------------------------------------------------------------------------
// ------------------------------------------ OR -----------------------------------------------
// ---------------------------------------------------------------------------------------------


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


int main()
{
    ShwaTech

    ll n; cin >> n;

    ll ans=1;

    for (ll k = 0; ; k++) {

        // Bitmasks Solution
        
        // (2^(k+1) − 1) × 2^k
        ll beautiful = ((1LL << (k+1)) - 1) * (1LL << k);

        if (beautiful > n) break;

        if (n % beautiful == 0) {
            ans = beautiful;
        }
    }

    cout << ans;

    return 0;
}
