@class NSMutableArray, NSMutableSet;

@interface SBClickGestureRecognizer : SBPressGestureRecognizer {
    unsigned long long _recognizedClicksCount;
    BOOL _gestureWasRecognized;
    BOOL _allPressBeganReceived;
    NSMutableArray *_shortcutPressTypesSubsets;
    NSMutableSet *_receivedPressBeganTypes;
    NSMutableSet *_receivedPressEndedTypes;
}

@property (nonatomic) unsigned long long numberOfClicksRequired;
@property (nonatomic) BOOL allPressesUpRequired;
@property (nonatomic) double maximumClickFormationDuration;
@property (nonatomic) double maximumClickDownDuration;
@property (nonatomic) double maximumBetweenClicksDelay;

- (BOOL)didReceiveRequiredPressBeganCount;
- (BOOL)didReceiveRequiredPressEndedCount;
- (BOOL)_areRequiredPressTypesContainedInSet:(id)a0;
- (id)gestureStateInfoForUnbalancedPressBeganCount:(long long)a0 previousCount:(long long)a1;
- (void)addShortcutWithPressTypes:(id)a0;
- (void)resetShortcutsTracking;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)reset;
- (void)_notePressReceivedWithType:(long long)a0 phase:(long long)a1;

@end
