@class VMVoicemailManager;

@interface VMServiceClient : NSObject

@property (retain, nonatomic) VMVoicemailManager *voicemailManager;

+ (id)sharedClient;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0 selector:(SEL)a1 name:(id)a2 object:(id)a3;
- (void).cxx_destruct;
- (id)sharedAccount;
- (void)dealloc;
- (void)removeObserver:(id)a0 name:(id)a1 object:(id)a2;
- (void)handleOnlineStatusChangedNotification:(id)a0;
- (void)handleSubscriptionStatusChangedNotification:(id)a0;
- (void)handleVoicemailsChangedNotification:(id)a0;
- (BOOL)sharedServiceIsSubscribed;

@end
