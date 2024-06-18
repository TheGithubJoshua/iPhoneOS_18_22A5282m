@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface CLServiceVendor : NSObject {
    NSMutableDictionary *_catalog;
    NSDictionary *_serviceReplacementMap;
    NSMutableSet *_unavailableServiceNames;
    NSMutableSet *_timeCoercibleSilos;
    int _missBehavior;
    double _currentGlobalLatchedAbsoluteTimestamp;
    NSMutableDictionary *_recordingFromTriggersByTo;
    NSMutableDictionary *_recordingToTriggersByFrom;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (void)rereadConfiguration:(id)a0;

- (id)init;
- (id)proxyForService:(id)a0 forClient:(id)a1;
- (BOOL)isServiceEnabled:(id)a0;
- (id)setRecordingTriggerMap:(id)a0 outputPathBase:(id)a1;
- (id)proxyForService:(id)a0;
- (void).cxx_destruct;
- (void)enableTimeCoercion;
- (id)getServiceWithName:(id)a0;
- (BOOL)isTimeCoercionEnabled;
- (BOOL)ensureServiceIsRunning:(id)a0;
- (void)setCurrentGlobalLatchedAbsoluteTimestamp:(double)a0;
- (void)setServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (void)dealloc;
- (void)retireServiceWithName:(id)a0;
- (int)missBehavior;
- (BOOL)isServiceRunning:(id)a0;
- (void)amendServiceReplacementMap:(id)a0 missBehavior:(int)a1;
- (void)intendToSyncServiceWithName:(id)a0;

@end
