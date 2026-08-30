class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
    int n = nums.size();
    vector<int> cpy = nums;
    sort(cpy.begin(),cpy.end());
    int id = 1;
    unordered_map<int,int> groupID;
    unordered_map<int,vector<int>> group;
    groupID[cpy[0]] = id;
    group[id].push_back(cpy[0]);
    for(int i=1;i<n;i++)
    {
        if(cpy[i] - cpy[i-1] > limit)
        id += 1;
        groupID[cpy[i]] = id;
        group[id].push_back(cpy[i]);
    }
    vector<int> pos(id+1,0);

    for(int i=0;i<n;i++)
    {
        int group_id = groupID[nums[i]];

        int element = group[group_id][pos[group_id]];

        pos[group_id] += 1;

        nums[i] = element;
    }
    return nums;
    }
};