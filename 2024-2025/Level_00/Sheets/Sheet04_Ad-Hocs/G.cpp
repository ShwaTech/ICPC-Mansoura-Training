// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم

#include <bits/stdc++.h>
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAX = 2e5+5;

using namespace std;


int main()
{
    ShwaTech

    int n, k, q; cin >> n >> k >> q;

    vector<int> freq(MAX, 0);

    while (n--) {
        int l, r; cin >> l >> r;

        freq[l]++;
        freq[r+1]--;
    }

    for (int i = 1; i < MAX; i++)
        freq[i] += freq[i-1];

    vector<int> good(MAX);
    for (int i = 0; i < MAX; i++)
        good[i] = (freq[i] >= k);

    vector<int> prefix(MAX);
    for (int i = 1; i < MAX; i++)
        prefix[i] = prefix[i-1] + good[i];

    while (q--) {
        int a, b; cin >> a >> b;

        cout << prefix[b] - prefix[a-1] << endl;
    }

    return 0;
}
