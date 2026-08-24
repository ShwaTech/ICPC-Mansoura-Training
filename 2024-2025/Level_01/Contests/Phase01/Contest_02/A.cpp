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


ll AtMostK (vector<ll> &a, int k) {
    map<ll, ll> freq;
    int L=0; ll seg=0;

    for (int R = 0; R < a.size(); R++) {
        freq[a[R]]++;

        while (freq.size() > k) {
            freq[a[L]]--;

            if (freq[a[L]] == 0) {
                freq.erase(a[L]);
            }

            L++;
        }

        seg += (R - L + 1);
    }

    return seg;
}


int main()
{
    ShwaTech

    // answer = atMost(k) − atMost(k−1)

    int n, k; cin >> n >> k;

    vector<ll> a(n);
    for (ll &ai: a) cin >> ai;


    cout << AtMostK(a, k) - AtMostK(a, k - 1);

    return 0;
}
