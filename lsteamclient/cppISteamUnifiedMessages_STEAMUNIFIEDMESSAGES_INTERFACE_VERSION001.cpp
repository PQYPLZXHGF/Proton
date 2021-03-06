#include "steam_defs.h"
#include "steamworks_sdk_141/steam_api.h"
#include "steamclient_private.h"
#include "cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001.h"
#ifdef __cplusplus
extern "C" {
#endif
#include "struct_converters_141.h"
ClientUnifiedMessageHandle cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendMethod(void *linux_side, const char * pchServiceMethod, const void * pRequestBuffer, uint32 unRequestBufferSize, uint64 unContext)
{
    return ((ISteamUnifiedMessages*)linux_side)->SendMethod((const char *)pchServiceMethod, (const void *)pRequestBuffer, (uint32)unRequestBufferSize, (uint64)unContext);
}

bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseInfo(void *linux_side, ClientUnifiedMessageHandle hHandle, uint32 * punResponseSize, EResult * peResult)
{
    return ((ISteamUnifiedMessages*)linux_side)->GetMethodResponseInfo((ClientUnifiedMessageHandle)hHandle, (uint32 *)punResponseSize, (EResult *)peResult);
}

bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_GetMethodResponseData(void *linux_side, ClientUnifiedMessageHandle hHandle, void * pResponseBuffer, uint32 unResponseBufferSize, bool bAutoRelease)
{
    return ((ISteamUnifiedMessages*)linux_side)->GetMethodResponseData((ClientUnifiedMessageHandle)hHandle, (void *)pResponseBuffer, (uint32)unResponseBufferSize, (bool)bAutoRelease);
}

bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_ReleaseMethod(void *linux_side, ClientUnifiedMessageHandle hHandle)
{
    return ((ISteamUnifiedMessages*)linux_side)->ReleaseMethod((ClientUnifiedMessageHandle)hHandle);
}

bool cppISteamUnifiedMessages_STEAMUNIFIEDMESSAGES_INTERFACE_VERSION001_SendNotification(void *linux_side, const char * pchServiceNotification, const void * pNotificationBuffer, uint32 unNotificationBufferSize)
{
    return ((ISteamUnifiedMessages*)linux_side)->SendNotification((const char *)pchServiceNotification, (const void *)pNotificationBuffer, (uint32)unNotificationBufferSize);
}

#ifdef __cplusplus
}
#endif
