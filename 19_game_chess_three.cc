class Board{
	public:
		bool checkWon(std::vector<std::vector<int>> board){
			int row = board.size();
			int sum1 = 0;
			int sum2 = 0;

			for(int i = 0; i < row; ++i){
				for(int j = 0; j < row; ++j){
					sum1 += board[i][j];
					sum2 += board[j][i];
				}
			}

			if(sum1 == row || sum2 == row){
				return true;
			}

			sum1 = 0;
			sum2 = 0;
			for(int i = 0; i < row; ++i){
				for(int j = 0; j < row; ++j){
					sum1 += board[i][i];
					sum2 += board[row - 1 - i][i];
				}
			}

			if(sum1 == row || sum2 == row){
				return true;
			}

			return false;
		}
};
