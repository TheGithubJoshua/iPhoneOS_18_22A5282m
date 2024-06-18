@interface APClientInfoUI : APClientInfo

+ (id)sharedInstance;

- (id)init;
- (id)initForTesting;
- (id)keyboards;
- (void)orientationChanged:(id)a0;
- (void)dealloc;

@end
