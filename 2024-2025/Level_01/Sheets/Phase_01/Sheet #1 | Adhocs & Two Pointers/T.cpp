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


int main()
{
    ShwaTech

    ll n; cin >> n;
    vector<ll> a(n);
    for (ll &ai: a) cin >> ai;

    ll L=0, ans=0;

    for (int R = 0; R < n; R++) {
        if (L == R) { ans++; }
        else {
            if (a[R-1] - a[R] == a[L] - a[L+1]) {
                ans += R - L + 1;
            } else {
                L = R-1;
                ans += 2;
            }
        }
    }

    cout << ans;

    return 0;
}

// // ------------------------------------------
// // --------------- OR -----------------------
// // ------------------------------------------

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
    vector<ll> a(n);
    for (ll &ai: a) cin >> ai;

    vector<ll> diff;
    for (ll i = 1; i < n; i++) {
        diff.push_back(a[i] - a[i - 1]);
    }

    if (n == 1) {
        cout << 1;
        return 0;
    }

    ll L=0, R=1, ans=n;

    while (R < n-1) {
        if (diff[L] == diff[R]) { R++; }
        else {
            ll len = R - L + 1;

            ans += (len * (len - 1)) / 2;

            while(a[L] != a[R]) L++;
        }
    }

    ll len = R - L + 1;

    ans += (len * (len - 1)) / 2;

    cout << ans;

    return 0;
}
