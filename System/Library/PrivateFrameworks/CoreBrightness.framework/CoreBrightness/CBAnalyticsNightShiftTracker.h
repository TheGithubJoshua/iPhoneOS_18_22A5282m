@interface CBAnalyticsNightShiftTracker : NSObject {
    double _modeChangeTimestamp;
    BOOL _isEnabled;
}

- (BOOL)isStarted;
- (void)stop:(int)a0 isEnabled:(BOOL)a1;
- (id)init;
- (void)start:(BOOL)a0;
- (void)update:(int)a0 isEnabled:(BOOL)a1;

@end
