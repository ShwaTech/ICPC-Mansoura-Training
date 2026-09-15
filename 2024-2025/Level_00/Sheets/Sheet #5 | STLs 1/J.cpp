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

    int n; ll k; cin >> n >> k;

    deque<int> dq;
    int mx = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        dq.push_back(x);

        mx = max(mx, x);
    }

    int champion = dq.front();
    dq.pop_front();

    ll wins = 0;

    while (true) {
        int challenger = dq.front();
        dq.pop_front();

        if (champion > challenger) {
            wins++;
            dq.push_back(challenger);
        } else {
            dq.push_back(champion);
            champion = challenger;
            wins = 1;
        }

        if (wins >= k) {
            cout << champion << nl;
            return 0;
        }

        if (champion == mx) {
            cout << champion << nl;
            return 0;
        }
    }

    return 0;
}
