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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<ll, null_type, greater_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>

using namespace std;


int main()
{
    ShwaTech

    // prefix[R] - prefix[L-1] < t
    // prefix[R] - t < prefix[L-1]

    ll n, t; cin >> n >> t;

    ordered_set os;
    os.insert(0);

    ll prefix=0, ans=0;
    for(ll i = 0; i < n; i++) {
        ll x; cin >> x;
        prefix += x;

        ans += os.order_of_key(prefix - t);
        os.insert(prefix);
    }

    cout << ans;


    return 0;
}
