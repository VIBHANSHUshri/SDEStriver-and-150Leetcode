// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//          int col0 = 0 , row0 = 0 ,  row = matrix.size() , col = matrix[0].size();
//          for(int i = 0; i < row ; i++)
//          {
//               if(matrix[i][0] == 0)
//               {
//                 col0 = 1;
//                 break;
//               }
//          }
//          for(int j = 0 ; j < col ; j++)
//          {
//             if(matrix[0][j] == 0)
//             {
//                 row0 = 1;
//                 break;
//             }
//          }

//          for(int i = 1 ; i < row ; i++)
//          {
//             for(int j = 1; j < col ; j++)
//             {
//                if(matrix[i][j] == 0)
//                {
//                 matrix[0][j] = 0;
//                 matrix[i][0] = 0;
//                }
//             }
//          }

//          for(int i = 1 ; i < row ; i++)
//          {
//             for(int j = 1 ; j < col ; j++)
//             {
//                 if(matrix[0][j] == 0)
//                 {
//                     matrix[i][j] = 0;
//                 }
//                  if(matrix[i][0] == 0)
//             {
//                 matrix[i][j] = 0;
//             }
//             }
     
//          }

//           if(row0)
//           {
//             for(int i = 0 ; i < col ; i++)
//             {
//                 matrix[0][i] = 0;
//             }
//           }
//           if(col0)
//           {
//              for(int j = 0 ; j < row ; j++)
//             {
//                 matrix[j][0] = 0;
//             }
//           }

//     }
// };