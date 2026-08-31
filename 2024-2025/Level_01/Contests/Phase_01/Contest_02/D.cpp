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

    int T; cin >> T;
    while (T--) {
        vector<ll> xyz(3);
        for (ll &e: xyz) cin >> e;

        if (xyz[0] == xyz[1] && xyz[0] == xyz[2] && xyz[1] == xyz[2]) {
            cout << "YES\n";
            cout << xyz[0] << " " << xyz[1] << " " << xyz[2] << "\n";
            continue;
        }

        if (xyz[0] != xyz[1] && xyz[0] != xyz[2] && xyz[1] != xyz[2]) {
            cout << "NO\n";
            continue;
        }

        ll mx = *max_element(All(xyz));
        ll mn = *min_element(All(xyz));

        if (count(All(xyz), mx) == 2) {
            cout << "YES\n";
            cout << mn << " " << mn << " " << mx << "\n";
            continue;
        }

        if (count(All(xyz), mx) == 1) {
            cout << "NO\n";
            continue;
        }

    }

    return 0;
}
