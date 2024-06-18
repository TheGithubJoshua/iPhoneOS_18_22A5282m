@class NSMutableDictionary;

@interface TCPreferences : NSObject

@property (retain, nonatomic) NSMutableDictionary *properties;
@property (readonly) long long devicePolicy;

+ (void)setOverridePreferences:(id)a0;
+ (id)defaultPreferences;
+ (id)userPreferences;

- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)initWithProperties:(id)a0;
- (void)setDevicePolicy:(long long)a0;

@end
