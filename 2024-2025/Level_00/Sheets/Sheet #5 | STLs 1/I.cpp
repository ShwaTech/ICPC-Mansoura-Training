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

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;

        vector<int> p(n);
        for (auto &pi: p) cin >> pi;

        deque<int> dq;

        dq.push_back(p[0]);
        for (int i = 1; i < n; ++i) {
            if (dq.front() < p[i]) dq.push_back(p[i]);
            else dq.push_front(p[i]);
        }

        for (int i = 0; i < n; ++i) {
            cout << dq[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
