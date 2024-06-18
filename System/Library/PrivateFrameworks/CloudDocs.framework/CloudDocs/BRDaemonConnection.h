@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)homeDirectoryURL;
+ (id)secondaryConnectionIfExists;
+ (id)syncedDocumentsURL;
+ (id)t_connectionForUUID:(id)a0;
+ (id)syncedRootURLs;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)initialize;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURL;
+ (void)t_setMobileDocumentsURL:(id)a0;
+ (id)syncedDesktopURL;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)t_setDefaultConnection:(id)a0;
+ (void)clearURLCache;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (void)invalidateCachedURLProperties;
+ (id)cloudDocsCachesURL;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnection;
+ (id)defaultConnectionIfExists;
+ (id)secondaryConnection;
+ (id)cloudDocsAppSupportURL;

- (void)_setupAndResume;
- (id)initUsingUserLocalDaemon;
- (id)newFPFSSyncProxy;
- (id)newLegacySyncProxy;
- (void).cxx_destruct;
- (id)newSyncTokenProxy;
- (id)newSyncProxy;
- (id)initUsingUserLocalDaemonTokenService;

@end
