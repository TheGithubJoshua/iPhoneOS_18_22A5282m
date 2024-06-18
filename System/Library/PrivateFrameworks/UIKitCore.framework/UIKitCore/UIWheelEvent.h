@class NSMutableArray;

@interface UIWheelEvent : UIEvent {
    long long _recentScrollDistance;
    NSMutableArray *_recentScrollEvents;
    long long lastSubtype;
}

- (long long)subtype;
- (double)_wheelVelocity;
- (BOOL)_canHaveVelocity;
- (void)_setHIDEvent:(struct __IOHIDEvent { } *)a0;
- (void).cxx_destruct;
- (long long)type;
- (void)_sendEventToResponder:(id)a0;

@end
