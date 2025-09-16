class Solution {
public:
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int lcm(int a, int b) { 
        return (a / gcd(a, b)) * b;
         }
         
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int> st;

        for (int num : nums) {
            st.push(num);

            while (st.size() > 1) {
                int m = st.top();
                st.pop();
                int n = st.top();
                st.pop();
                int g = gcd(m, n);

                if (g > 1) {
                    st.push(lcm(m, n));
                } else {
                    st.push(n);
                    st.push(m);
                    break;
                }
            }
        }

        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};