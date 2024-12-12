// class Solution {
// public:
     
//     vector<int>solve(int n)
//     {  
//          vector<int>ansrow;
//         long long ans = 1;
//         ansrow.push_back(1);
//         for(int i = 1 ; i < n ; i++)
//         {
//             ans = ans * (n - i);
//             ans = ans / i;
//             ansrow.push_back(ans);
//         }
//         return ansrow;
//     }
//     vector<vector<int>> generate(int numRows) {
//             vector<vector<int>>ans;
//             for(int i = 1 ; i <= numRows; i++)
//             {
//                      ans.push_back(solve(i));
//             }
//             return ans;
//     }
// };