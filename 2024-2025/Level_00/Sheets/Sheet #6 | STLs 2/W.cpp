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

using namespace std;

struct Segment {
    ll len, L, R;
};

struct compare {
    bool operator() (Segment a, Segment b) const {
        // If Same Length, Take the Leftmost (Smaller L)
        if (a.len == b.len) return a.L < b.L;
        // Else, Take The Segment With Max Len
        return a.len > b.len;
    }
};


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<ll> ans(n);
        multiset<Segment, compare> ms;

        ms.insert({n, 0, n-1});

        for (int i = 0; i < n; i++) {
            auto it = ms.begin();

            ll L = it->L;
            ll R = it->R;

            ms.erase(it);

            ll pos;
            if ((R - L + 1) % 2 == 0) {
                pos = (L + R - 1) / 2;
            } else {
                pos = (L + R) / 2;
            }

            ans[pos] = i+1;

            if (L <= pos - 1) {
                ms.insert({pos - L, L, pos - 1});
            }

            if (R >= pos + 1) {
                ms.insert({R - pos, pos + 1, R});
            }
        }

        for (auto an: ans) cout << an << " ";
        cout << nl;
    }

    return 0;
}
