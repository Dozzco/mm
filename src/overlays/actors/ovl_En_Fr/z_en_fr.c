#include "z_en_fr.h"

#define FLAGS 0x40000000

#define THIS ((EnFr*)thisx)

void EnFr_Init(Actor* thisx, GlobalContext* globalCtx);
void EnFr_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnFr_Update(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Fr_InitVars = {
    ACTOR_EN_FR,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    GAMEPLAY_KEEP,
    sizeof(EnFr),
    (ActorFunc)EnFr_Init,
    (ActorFunc)EnFr_Destroy,
    (ActorFunc)EnFr_Update,
    (ActorFunc)NULL
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Fr_0x808FC550/EnFr_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fr_0x808FC550/EnFr_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Fr_0x808FC550/EnFr_Update.asm")
