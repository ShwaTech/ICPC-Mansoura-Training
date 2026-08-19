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

    int n;
    while (cin >> n) {

        stack<int> st;
        queue<int> q;
        priority_queue<int> pq;

        bool isStack=true, isQueue=true, isPQ=true;

        while (n--) {
            int o, x; cin >> o >> x;

            if (o == 1) {
                st.push(x);
                q.push(x);
                pq.push(x);
            } else {
                if (st.empty() || st.top() != x) {
                    isStack = false;
                } else {
                    st.pop();
                }

                if (q.empty() || q.front() != x) {
                    isQueue = false;
                } else {
                    q.pop();
                }

                if (pq.empty() || pq.top() != x) {
                    isPQ = false;
                } else {
                    pq.pop();
                }
            }
        }

        int cnt = isStack + isQueue + isPQ;

        if (cnt == 0)
            cout << "impossible\n";
        else if (cnt > 1)
            cout << "not sure\n";
        else if (isStack)
            cout << "stack\n";
        else if (isQueue)
            cout << "queue\n";
        else
            cout << "priority queue\n";
    }

    return 0;
}
