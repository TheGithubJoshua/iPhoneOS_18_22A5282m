@class FBSDisplayLayoutMonitor, BMSource;

@interface _DKOrientationMonitor : _DKMonitor {
    FBSDisplayLayoutMonitor *_monitor;
    BMSource *_source;
}

+ (id)eventStream;
+ (id)entitlements;
+ (id)_BMEventWithValue:(long long)a0;
+ (id)_eventWithValue:(long long)a0;

- (void)stop;
- (void)start;
- (void)deactivate;
- (void).cxx_destruct;
- (void)dealloc;

@end
