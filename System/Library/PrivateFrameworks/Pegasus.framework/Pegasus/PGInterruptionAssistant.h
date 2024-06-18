@class NSString, NSMutableDictionary;
@protocol BSInvalidatable;

@interface PGInterruptionAssistant : NSObject {
    NSMutableDictionary *_lock_interruptions;
    NSString *_lock_exemptAttribution;
    BOOL _lock_allowsResumingAfterInterruptionEnds;
    BOOL _lock_isInterrupted;
    BOOL _lock_isInterruptedAccordingToProxy;
    BOOL _lock_isProxyActive;
    BOOL _lock_exemptFromUILockInterruptionsWhenActive;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BSInvalidatable> _stateDumpInvalidatable;
}

@property (readonly, getter=isInterrupted) BOOL interrupted;
@property (getter=isProxyActive) BOOL proxyActive;
@property (getter=isExemptFromUILockInterruptionsWhenActive) BOOL exemptFromUILockInterruptionsWhenActive;
@property (readonly) BOOL allowsResumingAfterInterruptionEnds;

- (void)addReason:(long long)a0 attribution:(id)a1;
- (id)init;
- (void)noteDidNotifyProxyOfInterruptionBegan;
- (BOOL)shouldNotifyProxyOfInterruptionEnded;
- (void)noteDidNotifyProxyOfInterruptionEnded;
- (BOOL)hasInterruptionReason:(long long)a0;
- (id)cameraInterruptionAttributions;
- (void).cxx_destruct;
- (id)description;
- (void)setExemptAttribution:(id)a0;
- (BOOL)_lock_calculateIsInterrupted;
- (BOOL)shouldNotifyProxyOfInterruptionBegan;
- (id)copyWithExemptAttribution:(id)a0;
- (void)dealloc;
- (id)exemptAttribution;
- (void)removeReason:(long long)a0 attribution:(id)a1;
- (id)_interruptionsDescription;

@end
