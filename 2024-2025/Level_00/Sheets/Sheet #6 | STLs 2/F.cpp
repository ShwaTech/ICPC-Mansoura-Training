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

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (auto &ai: a) cin >> ai;

        priority_queue<ll> pq;

        ll power=0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > 0) {
                pq.push(a[i]);
            } else if (a[i] == 0 && !pq.empty()) {
                power += pq.top();
                pq.pop();
            }
        }

        cout << power << nl;
    }

    return 0;
}

// // ---------------------------------------------
// // -------------------  OR ---------------------
// // ---------------------------------------------

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

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<ll> a(n);
        for (auto &ai: a) cin >> ai;

        multiset<ll> ms;

        ll power=0;
        for (int i = 0; i < n; ++i) {
            if (a[i] > 0) {
                ms.insert(a[i]);
            } else if (a[i] == 0 && !ms.empty()) {
                auto lastMax = prev(ms.end());
                power += *lastMax;
                ms.erase(lastMax);
            }
        }

        cout << power << nl;
    }

    return 0;
}
