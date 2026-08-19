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

void Format_Date (int h, int m) {
    if (h < 10) cout << "0";
    cout << h << ":";
    if (m < 10) cout << "0";
    cout << m;
}


int main()
{
    ShwaTech

    int T; cin >> T;
    while (T--) {
        string s; cin >> s;

        string H = s.substr(0, 2);
        string M = s.substr(3, 2);

        int h = stoi(H);
        int m = stoi(M);

        if (h == 0) {
            Format_Date(12, m);
            cout << " AM\n";
        } else if (h < 12) {
            Format_Date(h, m);
            cout << " AM\n";
        } else if (h == 12) {
            Format_Date(h, m);
            cout << " PM\n";
        } else {
            Format_Date(h-12, m);
            cout << " PM\n";
        }
    }

    return 0;
}
