@class CCUIStatusUpdateQueue, NSArray, NSTimer;
@protocol CCUIStatusLabelViewControllerDelegate;

@interface CCUIStatusLabelViewController : UIViewController {
    CCUIStatusUpdateQueue *_updateQueue;
    NSArray *_statusLabels;
    unsigned long long _currentStatusLabelIndex;
    unsigned long long _presentationState;
    NSTimer *_presentationTimer;
}

@property (weak, nonatomic) id<CCUIStatusLabelViewControllerDelegate> delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (nonatomic) unsigned long long verticalAlignment;

- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_advancePresentationState;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_fadeInStatusLabel:(id)a0;
- (void)_notifyDelegateWillBeginStatusUpdates;
- (void)viewDidLoad;
- (void)_notifyDelegateDidFinishStatusUpdates;
- (void)_resetPresentationStateAnimated:(BOOL)a0;
- (unsigned long long)_advancePresentationStateFromPresenting;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsets;
- (void)_fadeOutStatusLabel:(id)a0;
- (void).cxx_destruct;
- (void)enqueueStatusUpdate:(id)a0 forIdentifier:(id)a1;
- (unsigned long long)verticalAlignment;
- (BOOL)_canShowWhileLocked;
- (unsigned long long)_advancePresentationStateFromFadeOut;
- (unsigned long long)_advancePresentationStateFromReady;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setVerticalAlignment:(unsigned long long)a0;
- (unsigned long long)_advancePresentationStateFromFadeIn;

@end
