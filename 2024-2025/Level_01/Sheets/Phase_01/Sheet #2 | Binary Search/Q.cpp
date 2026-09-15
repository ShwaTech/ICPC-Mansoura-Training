// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

const double EPS = 1e-9;

bool Can (double max_amount, double k, vector<double> &energy) {
    double have=0, need=0;

    for (double amount: energy) {
            if (amount > max_amount) {
            double x = amount - max_amount;

            have += x - (x * k / 100.0);
        } else {
            need += max_amount - amount;
        }
    }

    return have >= need;
}


int main()
{
    ShwaTech

    ll n; double k; cin >> n >> k;

    vector<double> energy(n);
    for (double &amount: energy) cin >> amount;

    double L=0, R=1e9+10;
    while (R-L > EPS) {
        double mid = L + (R - L) / 2.0;

        if (Can(mid, k, energy)) {
            L = mid;
        } else {
            R = mid;
        }
    }

    cout << fixed << setprecision(9) << L;

    return 0;
}
