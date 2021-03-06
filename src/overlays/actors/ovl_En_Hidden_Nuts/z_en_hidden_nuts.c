#include "z_en_hidden_nuts.h"

#define FLAGS 0x02000009

#define THIS ((EnHiddenNuts*)thisx)

void EnHiddenNuts_Init(Actor* thisx, GlobalContext* globalCtx);
void EnHiddenNuts_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnHiddenNuts_Update(Actor* thisx, GlobalContext* globalCtx);
void EnHiddenNuts_Draw(Actor* thisx, GlobalContext* globalCtx);

/*
const ActorInit En_Hidden_Nuts_InitVars = {
    ACTOR_EN_HIDDEN_NUTS,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_HINTNUTS,
    sizeof(EnHiddenNuts),
    (ActorFunc)EnHiddenNuts_Init,
    (ActorFunc)EnHiddenNuts_Destroy,
    (ActorFunc)EnHiddenNuts_Update,
    (ActorFunc)EnHiddenNuts_Draw
};
*/

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/EnHiddenNuts_Init.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/EnHiddenNuts_Destroy.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB1B4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB268.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB2B8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB580.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB59C.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB788.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB7E8.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB8F4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB930.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDB978.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDBA28.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDBB48.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDBE70.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/func_80BDBED4.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/EnHiddenNuts_Update.asm")

GLOBAL_ASM("asm/non_matchings/ovl_En_Hidden_Nuts_0x80BDB040/EnHiddenNuts_Draw.asm")
