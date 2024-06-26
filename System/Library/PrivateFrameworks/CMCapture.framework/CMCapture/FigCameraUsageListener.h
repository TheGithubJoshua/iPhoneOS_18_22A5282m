@class NSString;

@interface FigCameraUsageListener : NSObject <MCProfileConnectionObserver> {
    BOOL _isProhibited;
    struct OpaqueFigSimpleMutex { } *_isProhibitedLock;
    id /* block */ _changeHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)initWithChangeHandler:(id /* block */)a0;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)dealloc;

@end
