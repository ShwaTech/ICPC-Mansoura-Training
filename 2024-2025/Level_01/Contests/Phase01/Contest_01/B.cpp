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

    int n, d; cin >> n >> d;
    vector<int> a(n);
    for (int & ai: a) cin >> ai;

    int L=0, distinct=0, Max_Range=0, best_L=0, best_R=0;

    unordered_map<int, int> freq;

    for (int R = 0; R < n; R++) {
        if (freq[a[R]] == 0) distinct++;
        freq[a[R]]++;

        while (distinct > d) {
            freq[a[L]]--;

            if (freq[a[L]] == 0) distinct--;
            L++;
        }

        if (R - L + 1 > Max_Range) {
            Max_Range = R - L + 1;
            best_L = L;
            best_R = R;
        }
    }

    cout << best_L + 1 << " " << best_R + 1;

    return 0;
}
