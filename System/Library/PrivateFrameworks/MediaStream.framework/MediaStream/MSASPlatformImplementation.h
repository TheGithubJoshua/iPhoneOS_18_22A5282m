@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (id)baseSharingURLForPersonID:(id)a0;
- (id)pushTokenForPersonID:(id)a0;
- (id)personIDsEnabledForAlbumSharing;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (id)albumSharingDaemon;
- (void).cxx_destruct;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (BOOL)shouldEnableNewFeatures;
- (int)MMCSConcurrentConnectionsCount;
- (BOOL)shouldLogAtLevel:(int)a0;
- (id)pathAlbumSharingDir;
- (Class)pluginClass;
- (BOOL)MSASIsAllowedToUploadAssets;
- (id)_accountForPersonID:(id)a0;

@end
