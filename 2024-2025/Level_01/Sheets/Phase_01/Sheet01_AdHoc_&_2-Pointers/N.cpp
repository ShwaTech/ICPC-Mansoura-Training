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

const int Q=2e5;

using namespace std;


int main()
{
    ShwaTech

    set<int> MEX;
    for (int i = 0; i < Q; i++) MEX.insert(i);

    int n; cin >> n;
    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int L=0;
    int CurrMEX=0, MaxMEX=0, MaxRange=0;

    map<int, int> freq;

    for (int R = 0; R < n; R++) {
        freq[a[R]]++;
        MEX.erase(a[R]);

        while (freq[a[R]] > 1) {
            freq[a[L]]--;

            if (freq[a[L]] == 0) MEX.insert(a[L]);

            L++;
        }

        CurrMEX = *MEX.begin();

        if (CurrMEX > MaxMEX) {
            MaxMEX = CurrMEX;
            MaxRange = R-L+1;
        }

        if (CurrMEX == MaxMEX) {
            MaxRange = max(MaxRange, R-L+1);
        }
    }

    cout << MaxRange;

    return 0;
}
