@class NSObject, NSMapTable, NSHashTable;
@protocol OS_dispatch_queue;

@interface FigCaptureSessionObservatory : NSObject {
    NSMapTable *_captureSessionsStorage;
    NSHashTable *_registeredObservers;
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastRunningIdentifier;
}

+ (void)initialize;
+ (id)sharedObservatory;

- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)captureSessionWasCreated:(struct OpaqueFigCaptureSession { } *)a0;

@end
