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
#define RAll(v) v.rbegin(),v.rend()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    ll n; cin >> n;
    vector<ll> a(n);
    for (auto &ai: a) cin >> ai;

    priority_queue<ll, vector<ll>, greater<ll>> pq;

    ll health=0;

    for (int i = 0; i < n; i++) {
        health += a[i];
        pq.push(a[i]);

        if (health < 0) {
            health -= pq.top();
            pq.pop();
        }
    }

    cout << pq.size();

    return 0;
}
