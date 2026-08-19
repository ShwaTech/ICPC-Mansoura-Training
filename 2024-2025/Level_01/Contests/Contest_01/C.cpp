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
#define PQ pair<ll, pair<ll, ll>>
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);


using namespace std;


int main()
{
    ShwaTech

    ll Q, x, y; cin >> Q >> x >> y;

    priority_queue< PQ, vector<PQ>, greater<PQ> > pq;
    map<pair<ll, ll>, bool> visited;

    while (Q--) {
        int op; cin >> op;

        if (op == 1) {
            ll X, Y; cin >> X >> Y;

            if (visited[{X, Y}]) continue;
            visited[{X, Y}] = true;

            ll distance = (X-x)*(X-x) + (Y-y)*(Y-y);
            pq.push({distance, {X, Y}});
        } else {
            ll nearest_x = pq.top().second.first;
            ll nearest_y = pq.top().second.second;
            pq.pop();

            visited[{nearest_x, nearest_y}] = false;

            cout << nearest_x << " " << nearest_y << nl;
        }
    }

    return 0;
}
