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

const int MAX=2e5+4;

using namespace std;


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<int> a(n), freq(MAX, 0);
        for (auto &ai: a) cin >> ai;

        for (int i = 0; i < n; i++) freq[a[i]]++;

        int ans=-1;

        for (int i = 0; i < MAX; i++) if (freq[i] >= 3) ans = i;

        cout << ans << endl;
    }

    return 0;
}
