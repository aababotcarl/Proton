#ifdef __cplusplus
extern "C" {
#endif
extern const char * cppISteamFriends_SteamFriends013_GetPersonaName(void *);
extern SteamAPICall_t cppISteamFriends_SteamFriends013_SetPersonaName(void *, const char *);
extern EPersonaState cppISteamFriends_SteamFriends013_GetPersonaState(void *);
extern int cppISteamFriends_SteamFriends013_GetFriendCount(void *, int);
extern CSteamID cppISteamFriends_SteamFriends013_GetFriendByIndex(void *, int, int);
extern EFriendRelationship cppISteamFriends_SteamFriends013_GetFriendRelationship(void *, CSteamID);
extern EPersonaState cppISteamFriends_SteamFriends013_GetFriendPersonaState(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends013_GetFriendPersonaName(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends013_GetFriendGamePlayed(void *, CSteamID, FriendGameInfo_t *);
extern const char * cppISteamFriends_SteamFriends013_GetFriendPersonaNameHistory(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends013_HasFriend(void *, CSteamID, int);
extern int cppISteamFriends_SteamFriends013_GetClanCount(void *);
extern CSteamID cppISteamFriends_SteamFriends013_GetClanByIndex(void *, int);
extern const char * cppISteamFriends_SteamFriends013_GetClanName(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends013_GetClanTag(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends013_GetClanActivityCounts(void *, CSteamID, int *, int *, int *);
extern SteamAPICall_t cppISteamFriends_SteamFriends013_DownloadClanActivityCounts(void *, CSteamID *, int);
extern int cppISteamFriends_SteamFriends013_GetFriendCountFromSource(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends013_GetFriendFromSourceByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends013_IsUserInSource(void *, CSteamID, CSteamID);
extern void cppISteamFriends_SteamFriends013_SetInGameVoiceSpeaking(void *, CSteamID, bool);
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlay(void *, const char *);
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlayToUser(void *, const char *, CSteamID);
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlayToWebPage(void *, const char *);
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlayToStore(void *, AppId_t, EOverlayToStoreFlag);
extern void cppISteamFriends_SteamFriends013_SetPlayedWith(void *, CSteamID);
extern void cppISteamFriends_SteamFriends013_ActivateGameOverlayInviteDialog(void *, CSteamID);
extern int cppISteamFriends_SteamFriends013_GetSmallFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends013_GetMediumFriendAvatar(void *, CSteamID);
extern int cppISteamFriends_SteamFriends013_GetLargeFriendAvatar(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends013_RequestUserInformation(void *, CSteamID, bool);
extern SteamAPICall_t cppISteamFriends_SteamFriends013_RequestClanOfficerList(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends013_GetClanOwner(void *, CSteamID);
extern int cppISteamFriends_SteamFriends013_GetClanOfficerCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends013_GetClanOfficerByIndex(void *, CSteamID, int);
extern uint32 cppISteamFriends_SteamFriends013_GetUserRestrictions(void *);
extern bool cppISteamFriends_SteamFriends013_SetRichPresence(void *, const char *, const char *);
extern void cppISteamFriends_SteamFriends013_ClearRichPresence(void *);
extern const char * cppISteamFriends_SteamFriends013_GetFriendRichPresence(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyCount(void *, CSteamID);
extern const char * cppISteamFriends_SteamFriends013_GetFriendRichPresenceKeyByIndex(void *, CSteamID, int);
extern void cppISteamFriends_SteamFriends013_RequestFriendRichPresence(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends013_InviteUserToGame(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends013_GetCoplayFriendCount(void *);
extern CSteamID cppISteamFriends_SteamFriends013_GetCoplayFriend(void *, int);
extern int cppISteamFriends_SteamFriends013_GetFriendCoplayTime(void *, CSteamID);
extern AppId_t cppISteamFriends_SteamFriends013_GetFriendCoplayGame(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends013_JoinClanChatRoom(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends013_LeaveClanChatRoom(void *, CSteamID);
extern int cppISteamFriends_SteamFriends013_GetClanChatMemberCount(void *, CSteamID);
extern CSteamID cppISteamFriends_SteamFriends013_GetChatMemberByIndex(void *, CSteamID, int);
extern bool cppISteamFriends_SteamFriends013_SendClanChatMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends013_GetClanChatMessage(void *, CSteamID, int, void *, int, EChatEntryType *, CSteamID *);
extern bool cppISteamFriends_SteamFriends013_IsClanChatAdmin(void *, CSteamID, CSteamID);
extern bool cppISteamFriends_SteamFriends013_IsClanChatWindowOpenInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends013_OpenClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends013_CloseClanChatWindowInSteam(void *, CSteamID);
extern bool cppISteamFriends_SteamFriends013_SetListenForFriendsMessages(void *, bool);
extern bool cppISteamFriends_SteamFriends013_ReplyToFriendMessage(void *, CSteamID, const char *);
extern int cppISteamFriends_SteamFriends013_GetFriendMessage(void *, CSteamID, int, void *, int, EChatEntryType *);
extern SteamAPICall_t cppISteamFriends_SteamFriends013_GetFollowerCount(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends013_IsFollowing(void *, CSteamID);
extern SteamAPICall_t cppISteamFriends_SteamFriends013_EnumerateFollowingList(void *, uint32);
#ifdef __cplusplus
}
#endif
