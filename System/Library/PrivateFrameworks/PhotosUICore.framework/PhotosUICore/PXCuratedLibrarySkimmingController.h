@class UISelectionFeedbackGenerator, NSArray, NSTimer, NSString, PXCuratedLibraryAssetCollectionSkimmingModel, PXAssetCollectionReference;
@protocol PXCuratedLibrarySkimmingControllerDelegate;

@interface PXCuratedLibrarySkimmingController : NSObject <PXChangeObserver> {
    UISelectionFeedbackGenerator *_skimmingFeedbackGenerator;
    double _slideshowTriggerDelay;
    double _slideshowIntervalDelay;
}

@property (retain, nonatomic) PXAssetCollectionReference *preSkimmedAssetCollectionReference;
@property (nonatomic) long long state;
@property (nonatomic) double lastPanningTranslation;
@property (nonatomic) long long currentSkimmingIndex;
@property (retain, nonatomic) NSArray *skimmingIndexes;
@property (nonatomic) long long skimmingDataSourceIdentifier;
@property (retain, nonatomic) NSTimer *slideshowTimer;
@property (readonly, nonatomic) PXCuratedLibraryAssetCollectionSkimmingModel *skimmingModel;
@property (weak, nonatomic) id<PXCuratedLibrarySkimmingControllerDelegate> delegate;
@property (nonatomic) BOOL skimmingSlideshowEnabled;
@property (readonly, nonatomic) BOOL canStartSkimming;
@property (readonly, nonatomic) BOOL isTouching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void)_stopSlideshow;
- (void)_enterTouchingStateForAssetCollectionReference:(id)a0;
- (void)_enterSlideshowStateForAssetCollectionReference:(id)a0;
- (void)_cleanupFeedbackGenerator;
- (id)initWithSkimmingModel:(id)a0;
- (void)startTouchingForAssetCollectionReference:(id)a0;
- (void)contentViewDidScroll;
- (void)startPanningForAssetCollectionReference:(id)a0;
- (void)_enterIdleStatePersistSkimmingState:(BOOL)a0;
- (BOOL)endTouchingGestureEnded:(BOOL)a0;
- (void)_ensureFeedbackGenerator;
- (void)_startOrResumeSlideshowTouchesEnded:(BOOL)a0;
- (void)updatePanningWithTranslation:(struct CGPoint { double x0; double x1; })a0;
- (void)contentViewWillScroll;
- (void).cxx_destruct;
- (void)endPanning;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_cancelEnteringTouchingState;
- (void)_generateFeedbackForSkimmingGesture;
- (void)_updateSlideshow;
- (void)_slideshowTimerTick:(id)a0;
- (void)_adoptIndexesFromSkimmingModel;

@end
