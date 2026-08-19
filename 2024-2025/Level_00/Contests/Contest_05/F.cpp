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

    deque<char> dq;

    int q; cin >> q;
    for (int i = 1; i <= q; i++) {
        int x; cin >> x;

        if (x == 3) {
            char c; cin >> c;
            dq.push_back(c);
        }
        if (x == 4) {
            char c; cin >> c;
            dq.push_front(c);
        }
        if (x == 2 && !dq.empty()) {
            if (dq.size() == 1)
                cout << i << " " << dq.front() << nl;
            dq.pop_front();
        }
        if (x == 1 && !dq.empty()) {
            if (dq.size() == 1)
                cout << i << " " << dq.back() << nl;
            dq.pop_back();
        }
    }

    return 0;
}
