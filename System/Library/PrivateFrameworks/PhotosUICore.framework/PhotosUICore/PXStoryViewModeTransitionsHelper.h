@class PXStoryModel, PXUpdater, PXStoryViewModeTransition, NSString;
@protocol PXStoryViewModeTransitionsHelperDelegate;

@interface PXStoryViewModeTransitionsHelper : NSObject <PXChangeObserver>

@property (nonatomic) long long presentedViewMode;
@property (retain, nonatomic) PXStoryViewModeTransition *currentViewModeTransition;
@property (retain, nonatomic) PXStoryViewModeTransition *pendingViewModeTransition;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, weak, nonatomic) PXStoryModel *model;
@property (weak, nonatomic) id<PXStoryViewModeTransitionsHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateIfNeeded;
- (id)init;
- (void)_setNeedsUpdate;
- (void)invalidatePresentingGeometry;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithModel:(id)a0;
- (void)_updateTransition;
- (void)_invalidateTransitionCompletion;
- (void)_configureTransition:(id)a0;
- (void)_currentTransitionDidCancel;
- (void)_currentTransitionDidFinish;
- (void)_invalidateTransition;
- (BOOL)_isViewModeSupported:(long long)a0;
- (void)_startTransition:(id)a0;
- (void)_updateTransitionCompletion;

@end
