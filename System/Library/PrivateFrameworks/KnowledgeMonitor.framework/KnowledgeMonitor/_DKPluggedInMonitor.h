@class BMSource;

@interface _DKPluggedInMonitor : _DKMonitor {
    BMSource *_source;
}

@property (nonatomic) BOOL enabled;
@property (nonatomic) int pluggedInToken;

+ (id)eventStream;
+ (id)entitlements;
+ (BOOL)shouldMergeUnchangedEvents;
+ (void)setIsPluggedIn:(BOOL)a0;
+ (id)_BMEventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;
+ (id)_eventWithState:(BOOL)a0 adapterType:(long long)a1 isWireless:(BOOL)a2;

- (void)stop;
- (void)start;
- (void)deactivate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCurrentState;
- (void)synchronouslyReflectCurrentValue;

@end
