#include "extdll.h"
#include "util.h"
#include "cbase.h"


class CTriggerPrint : public CBaseEntity
{
	// Is called when the entity spawns
	void Spawn() override;
	// Is called when the entity is triggered in some way.
	void Use(CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE usetype, float value) override;
};

void CTriggerPrint::Spawn()
{
// Do nothing here.
}
	
LINK_ENTITY_TO_CLASS(trigger_print, CTriggerPrint);

void CTriggerPrint::Use( CBaseEntity* pActivator, CBaseEntity* pCaller, USE_TYPE usetype, float value)
{
	// DO SOMETHING
	ALERT(at_console, "%s \n", STRING(pev->message)); 
}