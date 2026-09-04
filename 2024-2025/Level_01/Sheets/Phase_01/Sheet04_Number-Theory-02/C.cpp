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



int main()
{
    ShwaTech

    // gcd(bi+1, bi+25, bi+121, bi+169)
    // Based on That GCD Property:
    //      gcd(a, b) = gcd(a, b-a)    If a <= b
    // gcd(bi + 1, bi+25, bi+121, bi+169)
    // = gcd(bi + 1, bi+25 - bi+1, bi+121 - bi+1, bi+169 - bi+1)
    // = gcd(bi + 1, 25 - 1, 121 - 1, 169 - 1)

    // = gcd(bi + min_a, 25 - min_a, 121 - min_a, 169 - min_a)

    ll n, m; cin >> n >> m;

    vector<ll> a(n);
    for (ll &ai: a) cin >> ai;
    sort(All(a));

    ll commonGCD=0;
    for (ll i = 1; i < n; i++) {
        commonGCD = __gcd(commonGCD,a[i] - a[0]);
    }

    for (ll i = 0; i < m; i++) {
        ll bi; cin >> bi;

        cout << __gcd(bi + a[0], commonGCD) << " ";
    }

    return 0;
}

