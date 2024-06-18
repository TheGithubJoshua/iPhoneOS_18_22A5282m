@interface AMSEphemeralDefaults : NSObject

@property (class, nonatomic) long long HARLoggingItemLimit;
@property (class, nonatomic) BOOL preferEphemeralImageLoader;
@property (class, nonatomic) BOOL preferEphemeralURLSessions;
@property (class, nonatomic) BOOL processAssertionsEnabled;
@property (class, nonatomic) BOOL purchaseAccountFallback;
@property (class, nonatomic) BOOL suppressEngagement;

+ (void)setBagKeyRegistrationEnabled:(BOOL)a0;
+ (void)_accessDataStoreUsingBlock:(id /* block */)a0;
+ (id)_propertyForKey:(id)a0 defaultValue:(id)a1 expectedType:(Class)a2;
+ (BOOL)HARLoggingEnabled;
+ (void)_setProperty:(id)a0 forKey:(id)a1;
+ (BOOL)bagKeyRegistrationEnabled;
+ (void)setHARLoggingEnabled:(BOOL)a0;

@end
