@class PXUpdater, NSMutableDictionary;

@interface PXUserInterfaceElementEventTracker : PXObservable <PXUserInterfaceElementEventTracker>

@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL isAppActive;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) double currentTimestamp;
@property (readonly, nonatomic) PXUpdater *updater;
@property (copy, nonatomic) NSMutableDictionary *payload;

- (void)_applicationWillResignActive:(id)a0;
- (id)init;
- (void)didPerformChanges;
- (void)_setNeedsUpdate;
- (void)_applicationDidBecomeActive:(id)a0;
- (void)didDisappear;
- (void)setIsVisible:(BOOL)a0;
- (void)_updateIsVisible;
- (void).cxx_destruct;
- (void)didAppear;
- (void)_invalidateIsVisible;
- (id)finalPayloadWithPayload:(id)a0;
- (double)timeIntervalBetweenTimestamp:(double)a0 andTimestamp:(double)a1;
- (double)timeIntervalSinceTimestamp:(double)a0;

@end
