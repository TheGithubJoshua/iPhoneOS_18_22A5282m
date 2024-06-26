@interface IMRequirementLogger : NSObject

@property unsigned char loggingLevel;
@property const char *categoryOverride;
@property BOOL throwFailures;

+ (id)sharedInstance;
+ (id)__singleton__im;
+ (void)__setSingleton__im:(id)a0;

- (id)init;
- (id)description;
- (void)dealloc;
- (struct IMRequirementFailed_t { char *x0; BOOL x1; BOOL x2; unsigned char x3; })requirementDidFail:(const char *)a0;
- (void)updateSettingsFromUserDefaults;

@end
