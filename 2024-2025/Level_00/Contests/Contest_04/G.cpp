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

struct Row {
    int window = 2;
    int aisle = 2;
};


int main()
{
    ShwaTech

    int N; cin >> N;
    string S; cin >> S;

    vector<Row> bus(N);
    ll totalTime = 0;

    for (char c : S) {
        int row = -1;

        if (c == 'I') {
            // Find the farthest row with an available window seat.
            for (int i = N - 1; i >= 0; i--) {
                if (bus[i].window > 0) {
                    row = i;
                    bus[i].window--;
                    totalTime += 2LL * i + 10;
                    break;
                }
            }

            // If no window seat exists, behave like an Energetic sorcerer.
            if (row == -1) {
                for (int i = N - 1; i >= 0; i--) {
                    if (bus[i].window + bus[i].aisle > 0) {
                        if (bus[i].window > 0) {
                            bus[i].window--;
                            totalTime += 2LL * i + 10;
                        } else {
                            bus[i].aisle--;
                            totalTime += 2LL * i + 5;
                        }
                        break;
                    }
                }
            }
        } else { // 'E'
            // Find the farthest row with any available seat.
            for (int i = N - 1; i >= 0; i--) {
                if (bus[i].window + bus[i].aisle > 0) {
                    if (bus[i].window > 0) {
                        bus[i].window--;
                        totalTime += 2LL * i + 10;
                    } else {
                        bus[i].aisle--;
                        totalTime += 2LL * i + 5;
                    }
                    break;
                }
            }
        }
    }

    cout << totalTime << endl;

    return 0;
}
