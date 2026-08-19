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

    int n; cin >> n;

    vector<ll> a(n);
    for (ll &ai: a) cin >> ai;

    ll L=0, ans=0;
    set<ll> s;

    for (int R = 0; R < n; R++) {

        while (s.find(a[R]) != s.end()) {
            s.erase(a[L++]);
        }

        s.insert(a[R]);

        ll sz=s.size();

        ans = max(ans, sz);
    }

    cout << ans;


    return 0;
}
