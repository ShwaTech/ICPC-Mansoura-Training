// لا الاه الا الله وحده لا شريك له له الملك وله الحمد، وهو علي كل شئ قدير
// استغفر الله العظيم الذي لا الاه الا هو الحي القيوم واتوب اليه
// سبحان الله، الحمد لله، لا الاه الا الله، الله اكبر، لا حول ولا قوة الا بالله
// سبحان الله وبحمده، سبحان الله العظيم
// اللهم صلي وسلم وزد وبارك علي عبدك ونبيك محمد
// لا الاه الا الله وحده هو يتولي الصالحين
// ربي اني ظلمت نفسي، فاغفر لي
// حسبي الله لا الاه الا هو عليه توكلت وهو رب العرش العظيم
// بسم الله نبدأ وعليه نتوكل

#include <bits/stdc++.h>
#define nl "\n"
#define ll long long
#define All(v) v.begin(),v.end()
#define ShwaTech ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;


struct Dinasor {
    ll health, pos, idx;
    char dir;
};

bool compare_pos (Dinasor a, Dinasor b) {
    return a.pos < b.pos;
}

bool compare_idx (Dinasor a, Dinasor b) {
    return a.idx < b.idx;
}


int main()
{
    ShwaTech

    int n; cin >> n;

    vector<Dinasor> dinasor(n);

    for (int i = 0; i < n; i++) cin >> dinasor[i].health;
    for (int i = 0; i < n; i++) cin >> dinasor[i].pos;
    for (int i = 0; i < n; i++) dinasor[i].idx = i;

    string direction; cin >> direction;
    for (int i = 0; i < n; i++) dinasor[i].dir = direction[i];

    vector<Dinasor> survivors;
    stack<Dinasor> defenser;

    sort(All(dinasor), compare_pos);

    for (int i = 0; i < n; i++) {
        // Dinasors Moving Right
        if (dinasor[i].dir == 'R') {
            defenser.push(dinasor[i]);
        }
        // Dinasors Moving Left
        else {
            if (defenser.empty()) {
                survivors.push_back(dinasor[i]);
                continue;
            }

            while (!defenser.empty()) {
                if (dinasor[i].health > defenser.top().health) {
                    // L Wins
                    dinasor[i].health--;
                    defenser.pop();
                } else if (dinasor[i].health < defenser.top().health) {
                    // R Wins
                    dinasor[i].health = 0;
                    defenser.top().health--;

                    if (defenser.top().health == 0) { defenser.pop(); }

                    break;
                } else {
                    // Both Die
                    dinasor[i].health = 0;
                    defenser.pop();

                    break;
                }
            }

            if (defenser.empty() && dinasor[i].health > 0) {
                survivors.push_back(dinasor[i]);
            }
        }
    }

    while (!defenser.empty()) {
        survivors.push_back(defenser.top());
        defenser.pop();
    }

    if (survivors.empty()) {
        cout << "All killed!";
        return 0;
    }

    sort(All(survivors), compare_idx);

    cout << survivors.size() << nl;
    for (auto &survived : survivors) {
        cout << survived.health << " ";
    }

    return 0;
}
