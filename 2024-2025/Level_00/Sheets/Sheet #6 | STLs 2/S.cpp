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

bool Is_Suffix(string a, string b) {
    if (a.size() > b.size())
        return false;

    return b.substr(b.size() - a.size()) == a;
}


int main()
{
    ShwaTech

    int n; cin >> n;

    map<string, set<string>> mp;

    while (n--) {
        string name; int num;
        cin >> name >> num;

        set<string> phones;
        for (int i = 0; i < num; i++) {
            string phone;
            cin >> phone;
            phones.insert(phone);
            mp[name].insert(phone);
        }
    }

    cout << mp.size() << nl;
    for (auto person: mp) {
        vector<string> ans;

        for (auto a: person.second) {
            bool remove = false;

            for (auto b: person.second) {
                if (a == b) continue;
                if (Is_Suffix(a, b)) {
                    remove = true;
                    break;
                }
            }

            if (!remove) ans.push_back(a);
        }

        cout << person.first << " " << ans.size() << " ";
        for (auto phone: ans) {
            cout << phone << " ";
        }

        cout << nl;
    }

    return 0;
}
