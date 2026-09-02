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

// In the Problem he gave us it with 1e-4
// no matter if we increase it a bit
// Your answer will be considered correct if its absolute or relative error does not exceed 10−4.
const double precision = 1e-7;


int n, p;

bool Can (ld time, vector<ll> &consume, vector<ll> &have) {
    ld needed_time=0;

    for (int i = 0; i < n; ++i) {
        // The Power I Have is Greater than Consumed in specific time
        if (consume[i] * time <= have[i]) {
            continue;
        }

        needed_time += ((consume[i] * time - have[i]) / p);
    }

    return needed_time <= time;
}

int main()
{
    ShwaTech

    cin >> n >> p;

    vector<ll> consume(n), have(n);

    ll sum_consume=0;
    for (int i = 0; i < n; i++) {
        cin >> consume[i] >> have[i];

        sum_consume += consume[i];
    }

    if (p >= sum_consume) {
        cout << -1;
        return 0;
    }

    ld L=0, R=1e18;
    while (R - L > precision) {
        ld mid = L + (R - L) / 2;

        if (Can(mid, consume, have)) {
            L = mid;
        } else {
            R = mid;
        }
    }

    cout << fixed << setprecision(7) << R;

    return 0;
}

