#include "Memory.h"
#include "Vector.h"
#include <thread>
namespace offsets
{
	//*Add Offsets Down Below*//

// Client localPlayer, EntityList

// Engine clientState, clientStateViewAngels

// Entity boneMatrix, Dormant, TeamNum, iHealth, vecOrigin, vecVeiwOffset, aimPunchAngel, SpottedByMask
}
constexpr Vector3 CalculateAngle
(
	const Vector3& localPosition,
	const Vector3& enemyPosition,
	const Vector3& veiwAngles
)
noexcept
{
	return ((enemyPosition - localPosition).ToAngle() - veiwAngles);
}

int main()
{
	const auto memory = Memory{ "" };
	const auto client = memory.GetModuleAddress("client.dll");
	const auto engine = memory.GetModuleAddress("engine.dll");
	while (true)
	{
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
		const auto& localPlayer = memory.Read<std::uintptr_t>(client + offset:: // Here Set LocalPlayer Offset);
		const auto & localTeam = memory.Read<std::int32_t>(localPlayer + offset:: // Here Set TeamNum Offset);

	}

	return 0;
 }