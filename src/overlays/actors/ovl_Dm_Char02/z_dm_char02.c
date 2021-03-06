#include "z_dm_char02.h"

#define FLAGS 0x00000030

#define THIS ((DmChar02*)thisx)

void DmChar02_Init(Actor* thisx, GlobalContext* globalCtx);
void DmChar02_Destroy(Actor* thisx, GlobalContext* globalCtx);
void DmChar02_Update(Actor* thisx, GlobalContext* globalCtx);
void DmChar02_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit Dm_Char02_InitVars = {
    ACTOR_DM_CHAR02,
    ACTORTYPE_ITEMACTION,
    FLAGS,
    OBJECT_STK2,
    sizeof(DmChar02),
    (ActorFunc)DmChar02_Init,
    (ActorFunc)DmChar02_Destroy,
    (ActorFunc)DmChar02_Update,
    (ActorFunc)DmChar02_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/func_80AAAE30.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/func_80AAAECC.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/func_80AAAF2C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/DmChar02_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/DmChar02_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/func_80AAB04C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/DmChar02_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/func_80AAB23C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/func_80AAB258.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/func_80AAB270.asm")

GLOBAL_ASM("asm/non_matchings/ovl_Dm_Char02_0x80AAAE30/DmChar02_Draw.asm")
