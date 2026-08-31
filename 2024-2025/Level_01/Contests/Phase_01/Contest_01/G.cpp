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

    int n; cin >> n;

    set<int> S;

    int p; cin >> p;
    vector<int> P(p);
    for (int &Pi: P) {
        cin >> Pi;
        S.insert(Pi);
    }

    int q; cin >> q;
    vector<int> Q(q);
    for (int &Qi: Q) {
        cin >> Qi;
        S.insert(Qi);
    }

    if (S.size() == n) cout << "Pilgrims will survive";
    else cout << "Pilgrims won't survive";

    return 0;
}
