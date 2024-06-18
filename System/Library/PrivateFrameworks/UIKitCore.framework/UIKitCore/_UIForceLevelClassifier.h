@class NSString, NSMutableDictionary, NSArray, NSObservationSource;
@protocol _UIForceLevelClassifierDelegate;

@interface _UIForceLevelClassifier : NSObject <NSObserver> {
    NSObservationSource *_progressTouchForceObservable;
    NSMutableDictionary *_cachedProgressObservables;
    NSArray *_delegateObservations;
}

@property (nonatomic) double currentTouchForceMultiplier;
@property (nonatomic) BOOL respectsSystemGestureTouchFiltering;
@property (weak, nonatomic) id<_UIForceLevelClassifierDelegate> delegate;
@property (readonly, nonatomic) long long currentForceLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observeTouchWithForceValue:(double)a0 atTimestamp:(double)a1 withCentroidAtLocation:(struct CGPoint { double x0; double x1; })a2;
- (void)setCurrentForceLevel:(long long)a0;
- (id)observableForProgressToForceLevel:(long long)a0 minimumRequiredForceLevel:(long long)a1;
- (void)touchForceMultiplierDidChange;
- (void).cxx_destruct;
- (void)receiveObservedValue:(id)a0;
- (id)observableForProgressToForceLevel:(long long)a0;
- (BOOL)wantsUnclampedForceValues;
- (void)dealloc;
- (void)_notifyDelegateOfProgress:(double)a0 toForceLevel:(long long)a1;
- (void)_accessibilityForceSensitivityChanged:(id)a0;
- (void)reset;

@end
