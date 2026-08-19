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

    int n, a, b; cin >> n >> a >> b;

    vector<ll> p_factor(n);
    for (ll &pi: p_factor) cin >> pi;

    vector<ll> sorted_p_factor = p_factor;
    sort(All(sorted_p_factor));


    for (int i = 0; i < n; i++) {

        ll x = p_factor[i];

        // Predators:
        // a <= p[j] - x < b
        // x + a <= p[j] < x + b

        auto predatorL = lower_bound(All(sorted_p_factor), x + a);
        auto predatorR = lower_bound(All(sorted_p_factor), x + b);

        ll predators = predatorR - predatorL;

        // Prey:
        // a <= x - p[j] < b
        // x - b < p[j] <= x - a

        auto preyL = upper_bound(All(sorted_p_factor), x - b);
        auto preyR = upper_bound(All(sorted_p_factor), x - a);

        ll prey = preyR - preyL;

        cout << predators << " " << prey << nl;
    }

    return 0;
}
