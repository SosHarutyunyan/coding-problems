#include <iostream>
#include <vector>

std::vector<std::vector<int>> rotate_90 (std::vector<std::vector<int >>);

int main()
{
    std::vector<std::vector<int>> my_vec = {{1,2,3,4},
                                            {5,6,7,8},
                                            {9,10,11,12},
                                            {13,14,15,16}}; 

    for (int i = 0; i < my_vec.size(); ++i)
    {
         for (int j = 0; j < my_vec[0].size(); ++j)
        {
             std::cout << my_vec[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::vector<std::vector<int>> res_vec = rotate_90(my_vec);
    for (int i = 0; i < res_vec.size(); ++i)
    {
         for (int j = 0; j < res_vec[0].size(); ++j)
        {
             std::cout << res_vec[i][j] << " ";
        }
        std::cout << std::endl;
    }


}

std::vector<std::vector<int>> rotate_90 (std::vector<std::vector<int >> vec)
{
 std::vector<std::vector<int>> res_vec;
 res_vec.resize(vec.size());
 for (int i = 0; i < res_vec.size(); ++i)
 {
    res_vec[i].resize(vec[0].size());
 }

 for (int i = 0; i < vec.size(); ++i)
 {
    for (int j = 0; j < vec[0].size(); ++j)
    {
        res_vec[j][vec[0].size() - i - 1] = vec[i][j];
    }
 }
return res_vec;
}