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

int n, k;

bool Can (ll max_sum, vector<ll> &a) {
    ll curr_sum=0, cnt=1;

    for (int i = 0; i < n; i++) {
        if (curr_sum + a[i] > max_sum) {
            cnt++;
            curr_sum = 0;
        }

        curr_sum += a[i];
    }

    return cnt <= k;
}


int main()
{
    ShwaTech

    cin >> n >> k;

    ll max_ai=0, total_sum=0;
    vector<ll> a(n);
    for (ll &ai: a) {
        cin >> ai;

        max_ai = max(max_ai, ai);

        total_sum += ai;
    }


    ll L=max_ai, R=total_sum, ans=0;

    while (L <= R) {
        ll mid = L + (R - L) / 2;

        if (Can(mid, a)) {
            ans = mid;
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }

    cout << ans;

    return 0;
}
