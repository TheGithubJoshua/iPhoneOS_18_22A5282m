@interface WFPrivateAddressConfigManager : NSObject

@property (nonatomic) struct __SCPreferences { } *prefs;

- (id)init;
- (void)dealloc;
- (id)privateAddressConfig;

@end
