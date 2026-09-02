class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        if(players.size() == 1 && trainers.size() == 1 && players[0]<=trainers[0])
            return 1;

        sort(players.begin(), players.end());
        sort(trainers.begin(), trainers.end());

        int i=0,j=0;
        int maxTrainable=0;
        while(i<players.size() && j<trainers.size())
        {
            if(players[i]<= trainers[j])
            {
                maxTrainable++;
                i++;
                j++;
            }
            else
                j++;
        }
        return maxTrainable;
    }
};