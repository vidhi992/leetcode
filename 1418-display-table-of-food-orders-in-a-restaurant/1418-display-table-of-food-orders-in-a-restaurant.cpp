class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>>ans;
        map<int, map<string, int>> table;
        set<string> foods;
        for(auto &it :orders){
            int tableno = stoi(it[1]);
            string item = it[2];
             table[tableno][item]++;
            foods.insert(item);
        }
         vector<string> header;
        header.push_back("Table");
        for (auto &food : foods)
            header.push_back(food);

        ans.push_back(header);

        for (auto &t : table) {
            vector<string> row;
            row.push_back(to_string(t.first));

            for (auto &food : foods) {
                row.push_back(to_string(t.second[food]));
            }

            ans.push_back(row);
        }

        return ans;

    }
};