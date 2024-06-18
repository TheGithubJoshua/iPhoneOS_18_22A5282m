@class ENSession;

@interface WFEvernoteAccessResource : WFAccessResource

@property (class, readonly, nonatomic) ENSession *evernoteSession;

+ (id)userInterfaceClasses;
+ (id)userInterfaceProtocol;
+ (id)evernoteCallbackScheme;

- (unsigned long long)status;
- (void)dealloc;
- (id)initWithDefinition:(id)a0;
- (id)username;
- (id)resourceName;
- (id)associatedAppIdentifier;
- (BOOL)canLogOut;
- (void)logOut;
- (void)makeAvailableWithRemoteInterface:(id)a0 completionHandler:(id /* block */)a1;
- (id)protectedResourceDescription;

@end
