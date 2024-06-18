@class NSString, NSBackgroundActivityScheduler;

@interface HMDUpdater : HMFObject <HMFLogging>

@property (retain, nonatomic) NSBackgroundActivityScheduler *backgroundScheduler;
@property (retain, nonatomic) NSString *model;
@property (retain, nonatomic) NSString *targetKitUUID;
@property (retain, nonatomic) NSString *targetKitURLString;
@property (retain, nonatomic) NSString *targetKitDateString;
@property (retain, nonatomic) NSString *currentKitUUID;
@property (retain, nonatomic) NSString *platformString;
@property (retain, nonatomic) NSString *buildid;
@property (nonatomic) BOOL internal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (void)_info;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithCompletion:(id /* block */)a0;
- (int)_clean;
- (id)_downloadURL;
- (int)_download;
- (int)_install;
- (int)_executeScript:(const char *)a0;
- (int)_reboot;
- (void)_clearInstalledRootUUID;
- (void)_fetchManifestWithCompletion:(id /* block */)a0;
- (void)_handleServerResponse:(id)a0 withData:(id)a1 error:(id)a2;
- (int)_rebuild;
- (void)_scheduleUpdateCheck;
- (int)_uninstall;

@end
