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


vector<int> Get_Divisors (int n) {
    vector<int> res;

    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            res.push_back(i);

            if (i * i != n) {
                res.push_back(n/i);
            }
        }
    }

    return res;
}


int main()
{
    ShwaTech

    int a, b; cin >> a >> b;

    vector<int> divisors = Get_Divisors (__gcd(a, b));

    sort(All(divisors));

    int Q; cin >> Q;
    while (Q--) {
        int L, R; cin >> L >> R;

        // Ensure that we get the greater divisor than R (Out of The Range)
        int pos = upper_bound(All(divisors), R) - divisors.begin();

        // Minus 1 --> Makes it in the Range But Should be Greater than L
        pos--;

        if (divisors[pos] >= L) {
            cout << divisors[pos] << nl;
        } else {
            cout << -1 << nl;
        }
    }

    return 0;
}

