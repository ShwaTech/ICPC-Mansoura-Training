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

    int n, k; cin >> n >> k;

    vector<int> a(n), t(n);
    for (auto &ai: a) cin >> ai;
    for (auto &ti: t) cin >> ti;

    int sum=0;
    for (int i = 0; i < n; ++i) {
        if (t[i] == 1) sum += a[i];
    }

    vector<int> gain(n);
    for (int i = 0; i < n; ++i) {
        if (t[i] == 0)  gain[i] = a[i];
        else gain[i] = 0;
    }

    // Sliding Window on the Gain Array
    // Take the Max Window Size
    int mx=0;
    for (int i = 0; i < k; ++i) mx += gain[i];

    int gained=mx;

    int L=0, R=k;
    while (R < n) {
        mx -= gain[L++];
        mx += gain[R++];

        gained = max(gained, mx);
    }

    cout << sum + gained << endl;

    return 0;
}
