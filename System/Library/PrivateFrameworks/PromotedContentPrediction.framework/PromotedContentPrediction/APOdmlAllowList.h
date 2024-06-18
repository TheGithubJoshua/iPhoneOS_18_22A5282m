@class NSSet;

@interface APOdmlAllowList : APOdmlSingleton

@property (retain, nonatomic) NSSet *allowList;

+ (id)sharedInstance;

- (id)init;
- (BOOL)isAllowed:(id)a0;
- (void).cxx_destruct;
- (void)reinitializeAllowList;
- (unsigned long long)count;

@end
