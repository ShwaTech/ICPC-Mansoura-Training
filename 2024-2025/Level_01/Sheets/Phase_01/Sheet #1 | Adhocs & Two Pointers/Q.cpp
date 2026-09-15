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

    int n, k; cin >> n >> k;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    int L=0, count_zeros=0;
    int MaxRange=0, sub_L=0, sub_R=0;

    for (int R = 0; R < n; R++) {
        if (a[R] == 0) count_zeros++;

        while (count_zeros > k) {
            count_zeros -= (a[L] == 0);
            L++;
        }

        if (R-L+1 >= MaxRange) {
            MaxRange = R-L+1;
            sub_L = L;
            sub_R = R;
        }
    }

    cout << MaxRange << nl;

    for (int i = 0; i < n; ++i) {
        if (i >= sub_L && i <= sub_R) {
            cout << 1 << " ";
        }
        else {
            cout << a[i] << " ";
        }
    }

    return 0;
}
