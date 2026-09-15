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

    int n, q; cin >> n >> q;

    vector<int> a(n);
    for (int &ai: a) cin >> ai;

    while (q--) {
        int x; cin >> x;

        int L=0, R=n-1, mid, ans=-1;

        while (L <= R) {
            mid = L + (R - L) / 2;

            if (a[mid] == x) {
                ans = mid+1;
                break;
            }

            if (a[mid] >= x) {
                R = mid - 1;
            } else {
                L = mid + 1;
            }
        }

        cout << ans << nl;
    }

    return 0;
}
