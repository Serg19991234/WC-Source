#if defined _wcs_included
 #endinput
#endif
#define _wcs_included

/**
 * GetRealSpeed, GetRealGravity, GetRealAlpha, GetRealHealth
 * ���������� ��������, ������� �������� �������.
 * � GetRealModel ���������� ��������,
 * ������� ���� �� ��������� �������.
 */

/**
 * Get client's Anti Ultimate Status.
 *
 * @param index    An integer.
 * @return        Anti Ultimate Status.
 */
native bool:WCS_GetAntiUlt(index);

/**
 * Get client's Anti Aura Status.
 *
 * @param index    An integer.
 * @return        Anti Aura Status.
 */
native bool:WCS_GetAntiAura(index);

/**
 * Get client's Anti Totem Status.
 *
 * @param index    An integer.
 * @return        Anti Totem Status.
 */
native bool:WCS_GetAntiTotem(index);

/**
 * Get client's credits.
 *
 * @param index    An integer.
 * @return        Client's credits.
 */
native bool:WCS_GetCredits(index);

/**
 * Get client's gold.
 *
 * @param index    An integer.
 * @return        Client's gold.
 */
native WCS_GetGold(index);

/**
 * Get client's lvl.
 *
 * @param index    An integer.
 * @return        Client's lvl.
 */
native WCS_GetLvl(index);

/**
 * Get client's race lvl.
 *
 * @param index    An integer.
 * @return        Client's race lvl.
 */
native WCS_GetCLvl(index);

/**
 * Get client's Level Bank lvl.
 *
 * @param index    An integer.
 * @return        Client's Level Bank lvl.
 */
native WCS_GetLBlvl(index);

/**
 * Get client's vip status.
 * 
 * @param index    An integer.
 * @return        true on success, false otherwise.
 */
native bool:WCS_GetVip(index);

/**
 * Get client's xp.
 *
 * @param index    An integer.
 * @return        Client's xp.
 */
native WCS_GetXp(index);

/**
 * Get client's xp difference.
 *
 * @param index    An integer.
 * @return        Client's xp.
 */
native WCS_GetXpDifference(index);

/**
 * Get client's race name.
 *
 * @param index    An integer.
 * @param race	   An string.
 * @params size    An integer.
 * @return        true on success.
 */
native bool:WCS_GetRace(index, String:race[], size);

/**
 * Get client's real speed.
 *
 * @param index    An integer.
 * @return        Client's speed.
 */
native Float:WCS_GetRealSpeed(index);

/**
 * Get client's real gravity.
 *
 * @param index    An integer.
 * @return        Client's speed.
 */
native Float:WCS_GetRealGravity(index);

/**
 * Get client's real alpha.
 *
 * @param index    An integer.
 * @return        Client's alpha.
 */
native WCS_GetRealAlpha(index);

/**
 * Get client's real health.
 *
 * @param index    An integer.
 * @return        Client's health.
 */
native WCS_GetRealHealth(index);

/**
 * Get client's real model.
 *
 * @param index    An integer.
 * @param model    An string.
 * @param size     An integer.
 * @return        true on success, false otherwise.
 */
native bool:WCS_GetRealModel(index, String:model[], size);

/**
 * Get random client between radius.
 *
 * @param client    An integer.
 * @param radius    An float.
 * @param checkImmun An bool.
 * @return        random client on true.
 */
native WCS_GetRandomPosition(client, Float:radius, bool:checkImmun);

/**
 * Get nearest client between radius.
 *
 * @param client    An integer.
 * @param radius    An float.
 * @param checkImmun An bool.
 * @return        nearest client on true.
 */
native WCS_GetBestPosition(client, Float:radius, bool:checkImmun);

/**
 * Get client is admin.
 *
 * @param client    An integer.
 * @return        true if client is admin, false otherwise.
 */
native bool:WCS_GetWcsAdmin(client);

/**
 * Init Effects to client & attacker [optional].
 * If you want to use effect only for client:
 * InitEffects(client, client, effect);
 *
 * @param client    An integer.
 * @param victim    An integer.
 * @param effect    An string.
 * @return        true on success.
 */
native bool:WCS_InitEffects(client, victim, effect);

/**
 * Give client credits.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success.
 */
native bool:WCS_GiveCredits(client, value);

/**
 * Give client gold.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success.
 */
native bool:WCS_GiveGold(client, value);

/**
 * Give client lvl.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success.
 */
native bool:WCS_GiveLvl(client, value);

/**
 * Give client race lvl.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success.
 */
native bool:WCS_GiveCLvl(client, value);

/**
 * Give client Level Bank lvl.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success.
 */
native bool:WCS_GiveLBlvl(client, value);

/**
 * Give client xp.
 *
 * @param client    An integer.
 * @param value     An integer.
 * @param announce  An bool.
 * @return        true on success.
 */
native bool:WCS_GiveXp(client, value, bool:announce = true);

/**
 * Take client credits.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success.
 */
native bool:WCS_TakeCredits(client, value);

/**
 * Take client gold.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success.
 */
native bool:WCS_TakeGold(client, value);

/**
 * Take client Level Bank lvl.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success.
 */
native bool:WCS_TakeLBlvl(client, value);

/**
 * Set client real speed.
 *
 * @param client    An integer.
 * @param value    An float.
 * @return        true on success.
 */
native bool:WCS_SetRealSpeed(client, Float:value);

/**
 * Set client real gravity.
 *
 * @param client    An integer.
 * @param value    An float.
 * @return        true on success.
 */
native bool:WCS_SetRealGravity(client, Float:value);

/**
 * Set client real alpha.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success, false otherwise.
 */
native bool:WCS_SetRealAlpha(client, value);

/**
 * Set client real health.
 *
 * @param client    An integer.
 * @param value    An integer.
 * @return        true on success, false otherwise.
 */
native bool:WCS_SetRealHealth(client, value);

/**
 * Set client's real model.
 *
 * @param index    An integer.
 * @param model    An string.
 * @return        true on success, false otherwise.
 */
native bool:WCS_SetRealModel(index, const String:model[]);

/**
 * Set client's race.
 *
 * @param index    An integer.
 * @param race     An String.
 * @param suicide  An bool. (Check or not CVAR 'wcs_cr_suicide' = 1 then client will be killed)
 * @return        true on success, false otherwise.
 */
native bool:WCS_SetRace(index, const String:race[], bool:suicide = true);

/**
 * Reset client's skills.
 *
 * @param index    An integer.
 * @param fully    An bool. (if true then dont reuse skills after this operation)
 * @return        true on success, false otherwise.
 */
native bool:WCS_ResetSkills(client, bool:fully);

/**
 * Reset client ultimate cooldown.
 *
 * @param client    An integer.
 * @return        true on success.
 */
native bool:WCS_ResetUltCld(client);

/**
 * Reset client ability cooldown.
 *
 * @param client    An integer.
 * @return        true on success, false otherwise.
 */
native bool:WCS_ResetAbilityCld(client);

/**
 * Called on client skill lvl up
 *
 */
forward WCS_OnSkillLvlUp(client, skilllvl, const String:skillname[]);

/**
 * Called on client lvl up
 *
 */
forward WCS_OnLvlUp(client, lvl);

/**
 * Called on client ultimate cooldown has finished
 *
 */
forward WCS_OnUltimateCld(client);

/**
 * Called on client ability cooldown has finished
 *
 */
forward WCS_OnAbilityCld(client);

/**
 * Called on client skills has resetted
 *
 */
forward WCS_OnSkillsReset(client);

/**
 * Called on client xp gain
 *
 */
forward WCS_OnXpGain(client, xp, bool:lvlup);

/**
 * Called on client gold gain
 *
 */
forward WCS_OnGoldGain(client, gold);

/**
 * Called on client ultimate pre
 *
 */
forward Action:WCS_OnUltimatePre(client, const String:ultimate[]);

/**
 * Called on client ultimate post
 *
 */
forward WCS_OnUltimatePost(client);

/**
 * Called on client ability pre
 *
 */
forward Action:WCS_OnAbilityPre(client, const String:ability[]);

/**
 * Called on client ability post
 *
 */
forward WCS_OnAbilityPost(client);

/**
 * Called on client change race pre
 *
 */
forward Action:WCS_OnRaceChangePre(client, const String:OldRace[], const String:NewRace[]);

/**
 * Called on client change race post
 *
 */
forward WCS_OnRaceChangePost(client);

/**
 * Called on client item purchase pre
 *
 * PaymentType -- "cash" ��� "gold"
 */
forward Action:WCS_OnItemPurchasePre(client, const String:ItemName[], const String:BlockName[], ItemCost, const String:PaymentType);

/**
 * Called on client item purchase post
 *
 */
forward WCS_OnItemPurchasePost(client);