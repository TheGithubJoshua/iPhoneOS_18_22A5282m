@class NSMutableDictionary, NSObject;
@protocol RMSSessionManagerDelegate, OS_dispatch_queue;

@interface RMSSessionManager : NSObject {
    NSMutableDictionary *_sessions;
    NSObject<OS_dispatch_queue> *_sessionManagerQueue;
}

@property (weak, nonatomic) id<RMSSessionManagerDelegate> delegate;

- (id)init;
- (id)sessionWithIdentifier:(int)a0;
- (void).cxx_destruct;
- (void)_scheduleSessionExpirationWithIdentifier:(int)a0 timeout:(int)a1;
- (int)_uniqueSessionIdentifier;
- (void)_updatePersistedSessionIdentifiers;
- (void)beginSession:(id)a0 timeout:(int)a1 shouldTakePowerAssertion:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)endSessionWithIdentifier:(int)a0 completionHandler:(id /* block */)a1;
- (int)identifierForSession:(id)a0;
- (id)persistedSessionIdentifiers;
- (void)refreshSessionWithIdentifier:(int)a0;

@end
