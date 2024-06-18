@interface SBVODController : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)_launchIPodIfNecessary;
- (void)dealloc;

@end
