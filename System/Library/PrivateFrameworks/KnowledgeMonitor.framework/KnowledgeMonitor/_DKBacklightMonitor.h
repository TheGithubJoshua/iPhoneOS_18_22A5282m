@class BMBacklightStream;

@interface _DKBacklightMonitor : _DKMonitor {
    int notifyToken;
    BMBacklightStream *_backlightStream;
}

+ (id)eventStream;
+ (id)entitlements;
+ (void)setIsBacklit:(BOOL)a0;
+ (id)_eventWithState:(id)a0;
+ (BOOL)shouldMergeUnchangedEvents;
+ (BOOL)indicatesScreenOnWithNotificationState:(id)a0;

- (id)init;
- (void)stop;
- (void)start;
- (void)deactivate;
- (void).cxx_destruct;
- (void)obtainCurrentValue;
- (void)dealloc;
- (void)synchronouslyReflectCurrentValue;

@end
