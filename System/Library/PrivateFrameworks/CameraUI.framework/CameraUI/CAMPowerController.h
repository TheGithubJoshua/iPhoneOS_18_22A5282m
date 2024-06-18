@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CAMPowerController : NSObject {
    _Atomic int _assertionIdentifierGenerator;
}

@property (readonly, nonatomic) NSMutableDictionary *_assertionsByIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_powerControllerQueue;
@property (readonly, nonatomic) unsigned long long _backgroundTaskIdentifier;
@property (nonatomic, getter=_isBackgrounded, setter=_setBackgrounded:) BOOL _isBackgrounded;
@property (readonly, nonatomic) int _powerPressureNotificationToken;
@property (nonatomic, setter=_powerControllerQueue_setPowerPressureLevel:) unsigned int _powerControllerQueue_powerPressureLevel;

- (void)_applicationWillResignActive:(id)a0;
- (void)_applicationWillEnterForeground:(id)a0;
- (id)init;
- (void)_startBackgroundTaskIfNeeded;
- (unsigned int)powerPressureLevel;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)generateAssertionIdentifier;
- (void)_endBackgroundTaskIfNeeded;
- (void)dealloc;
- (void)addAssertionForIndentifier:(unsigned int)a0 withReason:(unsigned int)a1;
- (void)removeAssertionForIdentifier:(unsigned int)a0 withReason:(unsigned int)a1;

@end
