// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    // The Main Idea:
    // The problem isn't really about queries.
    //
    // It's about assigning numbers to positions.
    //
    // - Each position has a weight = how many queries include it.
    // - Each array element is a value.
    // - To maximize the weighted sum, assign the largest values to the largest weights (sort both arrays and pair them).

    int n, q; cin >> n >> q;

    vector<int> a(n);
    for (auto &ai: a) cin >> ai;

    vector<ll> diff(n+2, 0);
    while (q--) {
        int l, r; cin >> l >> r;

        diff[l]++;
        diff[r+1]--;
    }

    vector<ll> freq(n, 0);

    ll curr=0;
    for (int i = 1; i <= n; i++) {
        curr += diff[i];
        freq[i-1] = curr;
    }

    sort(All(a)), sort(All(freq));

    ll ans=0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * freq[i];
    }

    cout << ans << endl;

    return 0;
}
