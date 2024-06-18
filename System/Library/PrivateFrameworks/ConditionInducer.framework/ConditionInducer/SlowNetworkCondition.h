@class SlowNetworkUtil, NSString, NSDictionary;

@interface SlowNetworkCondition : COCondition

@property (nonatomic) BOOL running;
@property (retain, nonatomic) SlowNetworkUtil *util;
@property (retain, nonatomic) NSString *profile;
@property (retain, nonatomic) NSDictionary *profileData;

+ (id)description;
+ (id)descriptionWithProfileParamsForProfile:(id)a0;

- (id)initWithProfile:(id)a0;
- (BOOL)active;
- (void)tearDown;
- (BOOL)isDestructive;
- (void).cxx_destruct;
- (BOOL)setUp;
- (id)identifierName;
- (BOOL)isInternalOnly;
- (BOOL)isNLCPrefPaneActive;
- (id)userFriendlyName;

@end
