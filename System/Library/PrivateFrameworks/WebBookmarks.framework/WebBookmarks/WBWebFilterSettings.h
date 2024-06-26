@class WFUserSettings;

@interface WBWebFilterSettings : NSObject {
    WFUserSettings *_userSettings;
}

@property (class, readonly, nonatomic) WBWebFilterSettings *sharedWebFilterSettings;

@property (readonly, nonatomic) WFUserSettings *userSettings;
@property (readonly, nonatomic, getter=isWebFilterEnabled) BOOL webFilterEnabled;
@property (readonly, nonatomic) BOOL usesAllowedSitesOnly;

- (id)init;
- (void)reloadSettings;
- (void).cxx_destruct;
- (void)dealloc;

@end
