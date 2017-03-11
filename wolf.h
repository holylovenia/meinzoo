#include "mammalia.h"
#include "carnivora.h"
#include "behaviortame.h"

class Wolf : public Mammalia, public Carnivora, public BehaviorTame
{
	public :
	Wolf(int _weight);

	Wolf(const Wolf&);

	void interact();

	protected :

	private :
};