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
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد

using namespace std;


int main()
{
    ShwaTech

    int n; cin >> n;

    vector<int> enter_pos(n+1);

    for (int i = 1; i <= n; ++i) {
        int car; cin >> car;

        enter_pos[car] = i;
    }

    vector<int> exit_pos(n);

    for (int i = 0; i < n; ++i) {
        int car; cin >> car;

        exit_pos[i] = enter_pos[car];
    }

    int ans=0, mn=INT_MAX;

    for (int i = n-1; i >= 0; --i) {
        if (exit_pos[i] > mn) ans++;

        mn = min(mn, exit_pos[i]);
    }

    cout << ans;

    return 0;
}
