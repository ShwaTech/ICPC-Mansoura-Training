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

    ll N; cin >> N;
    ll T = 2 * N;
    vector<ll> a(T);
    for (auto &ai: a) cin >> ai;

    unordered_map<ll, bool> seen;

    ll curr=0, ans=INT_MIN;
    for (int i = 0; i < T; i++) {

        if (!seen[a[i]]) {
            seen[a[i]] = true;
            curr++;
        } else {
            seen[a[i]] = false;
            curr--;
        }

        ans = max(ans, curr);
    }

    cout << ans << nl;

    return 0;
}
