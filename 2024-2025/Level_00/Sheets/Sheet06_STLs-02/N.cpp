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
 // اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد

using namespace std;


int main()
{
    ShwaTech

    int n; cin >> n;

    if (n < 26) {
        cout << "NO\n";
        return 0;
    }

    string s; cin >> s;

    for (char &c: s) {
        c = tolower(static_cast<unsigned char>(c));
    }

    vector<int> freq(26, 0);

    for (char c: s) {
        freq[c - 'a']++;
    }

    bool ok=true;
    for (int i = 0; i < 26; i++) {
        if (freq[i] <= 0) {
            ok = false;
            break;
        }
    }

    cout << (ok ? "YES\n" : "NO\n");

    return 0;
}
