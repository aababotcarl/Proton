#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestCurrentStats(void *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat(void *, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetStat_2(void *, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat(void *, const char *, int32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetStat_2(void *, const char *, float);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UpdateAvgRateStat(void *, const char *, float, double);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievement(void *, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_SetAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ClearAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_StoreStats(void *);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementIcon(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetAchievementDisplayAttribute(void *, const char *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_IndicateAchievementProgress(void *, const char *, uint32, uint32);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_RequestUserStats(void *, CSteamID);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat(void *, CSteamID, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserStat_2(void *, CSteamID, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetUserAchievement(void *, CSteamID, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_ResetAllStats(void *, bool);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindOrCreateLeaderboard(void *, const char *, ELeaderboardSortMethod, ELeaderboardDisplayType);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_FindLeaderboard(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardName(void *, SteamLeaderboard_t);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardEntryCount(void *, SteamLeaderboard_t);
extern ELeaderboardSortMethod cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardSortMethod(void *, SteamLeaderboard_t);
extern ELeaderboardDisplayType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetLeaderboardDisplayType(void *, SteamLeaderboard_t);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_DownloadLeaderboardEntries(void *, SteamLeaderboard_t, ELeaderboardDataRequest, int, int);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_GetDownloadedLeaderboardEntry(void *, SteamLeaderboardEntries_t, int, LeaderboardEntry_t *, int32 *, int);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION005_UploadLeaderboardScore(void *, SteamLeaderboard_t, int32, int32 *, int);
#ifdef __cplusplus
}
#endif
