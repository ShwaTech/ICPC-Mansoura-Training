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

ll Sum(ll n) {
    return n * (n + 1) / 2;
}

ll R_Sum (ll L, ll R) {
    return Sum(R) - Sum(L - 1);
}


ll Binary_Search(ll n, ll k) {
    ll L=1, R=k;

    while (L < R) {
        ll mid = L + (R - L) / 2;

        ll sum = R_Sum(mid, k);

        if (sum == n) {
            return k - mid + 1;
        } else if (sum > n) {
            L = mid + 1;
        } else {
            R = mid;
        }
    }

    return k - L + 2;
}


int main()
{
    ShwaTech

    ll n, k; cin >> n >> k;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    if (k >= n) {
        cout << 1;
        return 0;
    }

    --k, --n;

    if (Sum(k) < n) {
        cout << -1;
    } else {
        cout << Binary_Search(n, k);
    }

    return 0;
}
