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

    deque<int> dq;

    int Q; cin >> Q;
    while (Q--) {
        string cmd; cin >> cmd;

        if (cmd == "push_back") {
            int x; cin >> x;
            dq.push_back(x);
        } else if (cmd == "push_front") {
            int x; cin >> x;
            dq.push_front(x);
        } else if (cmd == "pop_front" && !dq.empty()) {
            dq.pop_front();
        } else if (cmd == "pop_back" && !dq.empty()) {
            dq.pop_back();
        } else if (cmd == "front" && !dq.empty()) {
            cout << dq.front() << "\n";
        } else if (cmd == "back" && !dq.empty()) {
            cout << dq.back() << "\n";
        } else if (cmd == "print" && !dq.empty()) {
            int idx; cin >> idx;
            cout << dq[idx-1] << "\n";
        }
    }

    return 0;
}
