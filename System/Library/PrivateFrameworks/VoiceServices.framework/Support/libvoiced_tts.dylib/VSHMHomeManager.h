@interface VSHMHomeManager : NSObject

+ (id)init;
+ (id)sharedInstance;

- (void)transferPreinstallErrorMessagesOfLanguage:(id)a0 voiceName:(id)a1 forAccessoryID:(id)a2;

@end
