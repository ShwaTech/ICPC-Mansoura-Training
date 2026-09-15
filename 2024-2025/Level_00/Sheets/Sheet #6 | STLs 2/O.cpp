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

    int n, m; cin >> n >> m;

    unordered_map<string, string> words;

    while (m--) {
        string lang1, lang2; cin >> lang1 >> lang2;

        if (lang1.length() <= lang2.length()) {
            words.insert(make_pair(lang1, lang1));
        }

        words.insert(make_pair(lang1, lang2));
    }

    vector<string> notes(n);
    for (int i = 0; i < n; i++) {
        cin >> notes[i];
    }

    for (int i = 0; i < n; i++) {
        cout << words[notes[i]] << " ";
    }

    return 0;
}
