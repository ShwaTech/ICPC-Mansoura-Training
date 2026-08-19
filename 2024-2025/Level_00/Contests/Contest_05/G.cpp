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

struct triple {
    int r, x, y;
};


int main()
{
    ShwaTech

    int N, R; cin >> N >> R;

    vector<triple> circle(N);

    for (int i = 0; i < N; i++)
        cin >> circle[i].r >> circle[i].x >> circle[i].y;

    int c=0;
    for (int x = -R; x <= R; x++) {
        for (int y = -R; y <= R; y++) {
            if (x*x + y*y <= R*R) {
                for (int i = 0; i < N; i++) {
                    int curr_x = x - circle[i].x;
                    int curr_y = y - circle[i].y;
                    int curr_R = circle[i].r;

                    if (curr_x*curr_x + curr_y*curr_y <= curr_R*curr_R) {
                        c++;
                        break;
                    }
                }
            }
        }
    }

    cout << c << nl;

    return 0;
}
