#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamNetworking_SteamNetworking003_SendP2PPacket(void *, CSteamID, const void *, uint32, EP2PSend);
extern bool cppISteamNetworking_SteamNetworking003_IsP2PPacketAvailable(void *, uint32 *);
extern bool cppISteamNetworking_SteamNetworking003_ReadP2PPacket(void *, void *, uint32, uint32 *, CSteamID *);
extern bool cppISteamNetworking_SteamNetworking003_AcceptP2PSessionWithUser(void *, CSteamID);
extern bool cppISteamNetworking_SteamNetworking003_CloseP2PSessionWithUser(void *, CSteamID);
extern bool cppISteamNetworking_SteamNetworking003_GetP2PSessionState(void *, CSteamID, P2PSessionState_t *);
extern SNetListenSocket_t cppISteamNetworking_SteamNetworking003_CreateListenSocket(void *, int, uint32, uint16, bool);
extern SNetSocket_t cppISteamNetworking_SteamNetworking003_CreateP2PConnectionSocket(void *, CSteamID, int, int, bool);
extern SNetSocket_t cppISteamNetworking_SteamNetworking003_CreateConnectionSocket(void *, uint32, uint16, int);
extern bool cppISteamNetworking_SteamNetworking003_DestroySocket(void *, SNetSocket_t, bool);
extern bool cppISteamNetworking_SteamNetworking003_DestroyListenSocket(void *, SNetListenSocket_t, bool);
extern bool cppISteamNetworking_SteamNetworking003_SendDataOnSocket(void *, SNetSocket_t, void *, uint32, bool);
extern bool cppISteamNetworking_SteamNetworking003_IsDataAvailableOnSocket(void *, SNetSocket_t, uint32 *);
extern bool cppISteamNetworking_SteamNetworking003_RetrieveDataFromSocket(void *, SNetSocket_t, void *, uint32, uint32 *);
extern bool cppISteamNetworking_SteamNetworking003_IsDataAvailable(void *, SNetListenSocket_t, uint32 *, SNetSocket_t *);
extern bool cppISteamNetworking_SteamNetworking003_RetrieveData(void *, SNetListenSocket_t, void *, uint32, uint32 *, SNetSocket_t *);
extern bool cppISteamNetworking_SteamNetworking003_GetSocketInfo(void *, SNetSocket_t, CSteamID *, int *, uint32 *, uint16 *);
extern bool cppISteamNetworking_SteamNetworking003_GetListenSocketInfo(void *, SNetListenSocket_t, uint32 *, uint16 *);
extern ESNetSocketConnectionType cppISteamNetworking_SteamNetworking003_GetSocketConnectionType(void *, SNetSocket_t);
extern int cppISteamNetworking_SteamNetworking003_GetMaxPacketSize(void *, SNetSocket_t);
#ifdef __cplusplus
}
#endif
