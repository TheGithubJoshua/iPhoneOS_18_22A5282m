@class TPSTipStatusController, NSString, NSMutableDictionary, NSMutableArray, NSDate, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface TPSCommonDefines : NSObject {
    NSMutableArray *_cloudDevices;
    NSString *_userLanguage;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableDictionary *collectionStatusMap;
@property (nonatomic) int maxVersion;
@property (nonatomic) BOOL supportsUIApplication;
@property (readonly, nonatomic) BOOL tipsAccessAllowed;
@property (readonly, nonatomic, getter=isPhoneUI) BOOL phoneUI;
@property (readonly, nonatomic, getter=isPadUI) BOOL padUI;
@property (readonly, nonatomic, getter=isMacUI) BOOL macUI;
@property (readonly, nonatomic) long long daysSinceLastMajorVersionUpdate;
@property (retain, nonatomic) NSString *majorVersion;
@property (retain, nonatomic) NSDate *lastMajorVersionUpdateDate;
@property (retain, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *userLanguage;
@property (readonly, nonatomic) NSUserDefaults *appGroupDefaults;
@property (retain, nonatomic) NSMutableDictionary *appBundleIDMap;
@property (readonly, nonatomic) long long assetRatioType;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;

+ (BOOL)isInternalBuild;
+ (id)deviceName;
+ (id)deviceClass;
+ (id)productVersion;
+ (id)clientBundleIdentifier;
+ (BOOL)isSeniorUser;
+ (BOOL)isInternalDevice;
+ (id)sharedInstance;
+ (BOOL)hardwareChanged;
+ (int)maxRequestVersion;
+ (id)notificationBundleIdentifier;
+ (id)osBuild;
+ (id)appGroupIdentifier;
+ (BOOL)isGreenTeaDevice;
+ (BOOL)callerIsTipsdWithSource:(id)a0;
+ (id)_tipStatusArchivalURL;
+ (id)tipsCoreFrameworkBundle;
+ (id)deviceFamily;

- (id)dateForCollectionIdentifier:(id)a0 dateType:(unsigned long long)a1;
- (id)init;
- (id)userLanguage;
- (id)reloadAppGroupDefaults;
- (void)updateCollectionStatus:(unsigned long long)a0 collections:(id)a1;
- (id)collectionIdentifierToUseForCollectionIdentifiers:(id)a0;
- (void)activatedCollection:(id)a0;
- (long long)userType;
- (void)syncCollectionStatusMap;
- (id)collectionStatusForCollectionIdentifier:(id)a0;
- (void)featuredCollection:(id)a0;
- (void)notifiedCollection:(id)a0;
- (void)resetCollectionStatusMap;
- (void).cxx_destruct;
- (void)activatedCollections:(id)a0;
- (id)lastMajorVersionUpdateDate;
- (BOOL)hasLocaleChanged;
- (void)setUserLanguage:(id)a0;
- (void)viewedCollection:(id)a0;
- (id)appBundleIDForInstalledAppWithIdentifier:(id)a0;
- (void)clearDataCache;
- (id)activateDateForCollectionIdentifier:(id)a0;
- (void)reloadModelInformation;
- (id)archivedTipStatuses;
- (long long)daysSinceLastMajorVersionUpdate;
- (void)deleteTipStatusArchivalDirectory;
- (void)setLastMajorVersionUpdateDate:(id)a0;

@end
