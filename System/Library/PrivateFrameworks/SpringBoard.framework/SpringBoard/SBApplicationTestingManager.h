@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface SBApplicationTestingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_testEndedHandlers;
}

@property (readonly, nonatomic, getter=_idleTimerDisableAssertions) NSMutableDictionary *idleTimerDisableAssertions;
@property (copy, nonatomic) NSString *currentTestName;
@property (copy, nonatomic) NSString *scrollTestActiveSubtest;

+ (id)sharedInstance;

- (id)init;
- (void)_handleTestEnded;
- (void)installNotificationObserverForNotificationName:(id)a0 notificationCenter:(id)a1 forOneNotification:(BOOL)a2 usingBlock:(id /* block */)a3;
- (void)markUserLaunchInitiationTime;
- (void).cxx_destruct;
- (void)installNotificationObserverForNotificationName:(id)a0 forOneNotification:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)_installTestEndedHandler:(id /* block */)a0;
- (void)setupKeyboardAnimationSubTestsForTestName:(id)a0;
- (void)_prepareForTestStartup:(id)a0;

@end
