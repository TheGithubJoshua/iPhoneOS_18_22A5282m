@class NSString;

@interface SBHApplicationIcon : SBLeafIcon

@property (nonatomic, getter=isUninstalledByUser) BOOL uninstalledByUser;
@property (readonly, copy, nonatomic) NSString *applicationDisplayName;

- (BOOL)pauseDownload;
- (BOOL)cancelDownload;
- (id)copyWithLeafIdentifier:(id)a0;
- (BOOL)resumeDownload;
- (id)initWithLeafIdentifier:(id)a0 applicationPlaceholder:(id)a1;
- (void)addApplicationDataSource:(id)a0;
- (void)possibleUserTapDidCancel;
- (void)possibleUserTapBeganWithAbsoluteTime:(unsigned long long)a0 andContinuousTime:(unsigned long long)a1;
- (BOOL)prioritizeDownload;
- (id)initWithApplication:(id)a0;
- (id)application;
- (void)removeApplicationDataSources;
- (id)iconImageCacheIdentifier;
- (void)noteExternalApplicationPlaceholderStateChange;
- (id)initWithApplicationWithBundleIdentifier:(id)a0;
- (void)setBadge:(id)a0;
- (id)automationID;
- (BOOL)isApplicationIcon;
- (void)replaceIconDataSourcesWithApplication:(id)a0;
- (id)initWithLeafIdentifier:(id)a0 application:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplicationPlaceholder:(id)a0;
- (void)replaceIconDataSourcesWithApplicationPlaceholder:(id)a0;
- (void)removeApplicationPlaceholderDataSources;
- (id)applicationPlaceholder;

@end
