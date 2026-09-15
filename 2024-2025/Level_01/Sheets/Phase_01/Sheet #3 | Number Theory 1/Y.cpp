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
#define All(v) v.begin(),v.end()
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    int n; cin >> n;

    map<int, int> prime_factors;
    int mx=0;

    for (int i = 2; i*i <= n; ++i) {
        while (n % i == 0) {
            prime_factors[i]++;
            n /= i;

            mx = max(mx, prime_factors[i]);
        }
    }

    if (n > 1) {
        prime_factors[n]++;
        mx = max(mx, prime_factors[n]);
    }

    int max_pow_of_2=1, cnt=0;
    while (max_pow_of_2 < mx) {
        max_pow_of_2 *= 2;
        cnt++;
    }

    int ans=1, need_to_multiply=0;
    for (auto pf: prime_factors) {
        if (pf.second  != max_pow_of_2) need_to_multiply=1;
        ans *= pf.first;
    }

    cout << ans << " " << cnt + need_to_multiply;

    // 2 Operation sqrt (power 2) and multiplication
    // cnt ==> 2 Power cnt
    // need_to_multiply if needed it will only added once

    return 0;
}

