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

using namespace std;


int main()
{
    ShwaTech

    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (auto &ai: a) cin >> ai;

    unordered_map<int, int> freq;
    // vector<int> freq(1e6+5);
    int L=0, distinct=0;
    int bestL=0, bestR=0;

    for (int R = 0; R < n; ++R) {
        if (freq[a[R]] == 0) distinct++;
        freq[a[R]]++;

        while (distinct > k) {
            freq[a[L]]--;
            if (freq[a[L]] == 0) distinct--;
            L++;
        }

        if (R - L > bestR - bestL) {
            bestR = R; bestL = L;
        }
    }

    cout << bestL+1 << " " << bestR+1 << endl;

    return 0;
}
