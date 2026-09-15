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

    queue<int> q;

    int T; cin >> T;
    while (T--) {
        int id, n; cin >> id >> n;

        if (id == 1) {
            q.push(n);
        } else {
            if (!q.empty()) {
                if (q.front() == n) cout << "yes\n";
                else cout << "no\n";
                q.pop();
            } else {
                cout << "no\n";
            }
        }
    }

    return 0;
}
