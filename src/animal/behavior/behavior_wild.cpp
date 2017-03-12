#include "behavior_wild.h"

void BehaviorWild::setBehavior() {
	isWild = true;
}

void BehaviorWild::addEnemy(int x) {
	enemy.insert(x);
}

void BehaviorWild::removeEnemy(int x) {
	enemy.erase(x);
}

bool BehaviorWild::isEnemy(int x) {
	return(enemy.find(x) != enemy.end());
}