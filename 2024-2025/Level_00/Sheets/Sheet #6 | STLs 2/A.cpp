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

    multiset<ll> ms;

    int Q; cin >> Q;
    while (Q--) {
        int n; cin >> n;

        if (n == 1) {
            ll x; cin >> x;
            ms.insert(x);
        } else if (n == 2) {
            ll x; cin >> x;
            auto it = ms.find(x);
            if (it != ms.end()) ms.erase(it);
        } else {
            if (!ms.empty()) {
                auto it = ms.begin();
                cout << *it << nl;
            } else {
                cout << "It is Just EMPTY\n";
            }
        }
    }

    return 0;
}
