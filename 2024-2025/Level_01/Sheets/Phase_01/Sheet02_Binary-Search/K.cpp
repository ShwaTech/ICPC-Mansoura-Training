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

    int T; cin >> T;
    while (T--) {
        int n, m, q; cin >> n >> m >> q;

        vector<int> teacher(m);
        for (int &teacher_i: teacher) cin >> teacher_i;
        sort(All(teacher));

        while (q--) {
            int david; cin >> david;

            if (david < teacher[0]) {
                cout << teacher[0] - 1 << nl;
            } else if (david > teacher[m-1]) {
                cout << n - teacher[m-1] << nl;
            } else {
                int mid = upper_bound(All(teacher), david) - teacher.begin();

                cout << (teacher[mid] - teacher[mid-1]) / 2 << nl;
            }
        }

    }

    return 0;
}
