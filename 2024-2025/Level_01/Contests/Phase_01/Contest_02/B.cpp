// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// لا الاه الا الله وحده هو يتولي الصالحين
// ربي اني ظلمت نفسي، فاغفر لي
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم
// بسم الله نبدأ وعليه نتوكل

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


int main()
{
    ShwaTech

    ll L, R, K; cin >> L >> R >> K;

    int m; cin >> m;
    set<ll> missed;
    for (int i = 0; i < m; i++) {
        ll x; cin >> x;

        missed.insert(x);
    }

    for (ll i = L; i <= R; i++) {
        if (
            missed.find(i) == missed.end() &&
            missed.find(K - i) == missed.end() &&
            (K - i >= L) && (K - i <= R)
        ) {
            cout << "mission passed + respect";
            return 0;
        }
    }

    cout <<  "wasted";

    return 0;
}
