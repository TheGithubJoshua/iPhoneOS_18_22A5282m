@class UIView;
@protocol PXTranscriptBubbleDelegate;

@interface PXTranscriptBubbleViewController : UIViewController {
    BOOL _transitionInProgress;
    struct CGSize { double width; double height; } _lastRequestedSize;
    long long _lastResizeRequestID;
    BOOL _isReadyForDisplay;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *targetContentView;
@property (weak, nonatomic) id<PXTranscriptBubbleDelegate> delegate;

- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })contentSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_contentViewSizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_requiresResizeForCurrentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_resizeTimeoutForRequestID:(long long)a0;
- (void)_scheduleContentViewUpdate;
- (void)_switchToPendingTargetViewIfNecessary;
- (void)transitionToContentView:(id)a0;
- (struct CGSize { double x0; double x1; })workaroundSizeForSize:(struct CGSize { double x0; double x1; })a0;

@end
