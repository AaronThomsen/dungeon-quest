#ifndef finalbattle_h
#define finalbattle_h

#include "battle.h"

namespace fb {
	class FinalBattle : public Battle {
	private:
		Monster * getDog(int stage);
		bool isDead;
		Monster* monster; //the current monster for the current battle
		std::vector<Monster*> monsters; //save pups/dogs to some vector
	public:
		int stage = 1;
		FinalBattle(Character& ch, Inventory& i) : Battle(ch, i, 11) {
			monster = getDog(stage);
		}

		~FinalBattle() {
			if (monsters.size() != 0) {
				for (size_t i = 0; i < monsters.size(); i++)
					delete monsters[i];
				monsters.clear();
			}
		}

		void nextStage() {
			stage += 1;
		}

		void performEvent();

		bool performTurn(int& doom, int& pups, int& turn);

		void displayCommands(int& turn, int& doom, std::string& userInput);

		void performMonsterAttk(int& monsterAtk);
	};
}
#endif //finalbattle_h
