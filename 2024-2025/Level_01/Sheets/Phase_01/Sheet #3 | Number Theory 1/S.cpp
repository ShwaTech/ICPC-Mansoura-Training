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


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        ll n, m; cin >> n >> m;

        ll n0 = n;
        ll cnt2=0, cnt5=0;

        while (n > 0 && n % 2 == 0) {
            cnt2++;
            n /= 2;
        }

        while (n > 0 && n % 5 == 0) {
            cnt5++;
            n /= 5;
        }

        ll k=1;

        while (cnt2 < cnt5 && k * 2 <= m) {
            cnt2++;
            k *= 2;
        }

        while (cnt5 < cnt2 && k * 5 <= m) {
            cnt5++;
            k *= 5;
        }

        while (k * 10 <= m) {
            k *= 10;
        }


        if (k == 1) {
            cout << n0 * m << nl;
        } else {
            k *= m / k;
            cout << n0 * k << nl;
        }
        
    }

    return 0;
}

