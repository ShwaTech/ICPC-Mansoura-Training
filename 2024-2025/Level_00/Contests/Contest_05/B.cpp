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

    string s; cin >> s;

    deque<char> dq;
    dq.push_back(s[0]);

    for (int i = 1; i < s.length(); i++) {
        if (!dq.empty() && dq.back() == s[i]) {
            dq.pop_back();
        } else {
            dq.push_back(s[i]);
        }
    }

    while (!dq.empty()) {
        cout << dq.front();
        dq.pop_front();
    }

    return 0;
}
