@class NSArray, NSString, AVControlOverflowButton;
@protocol AVMobileAuxiliaryControlsViewDelegate;

@interface AVMobileAuxiliaryControlsView : AVView <AVMobileAuxiliaryControlDelegate, AVControlOverflowButtonDelegate> {
    AVControlOverflowButton *_overflowControl;
    NSArray *_controlsInPriorityOrder;
}

@property (nonatomic) BOOL hasOverflowOnlyControl;
@property (weak, nonatomic) id<AVMobileAuxiliaryControlsViewDelegate> delegate;
@property (retain, nonatomic) NSArray *controls;
@property (nonatomic) double controlSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_updateHasOverflowOnlyControl;
- (void)_updateOverflowControlContextMenu;
- (struct CGSize { double x0; double x1; })sizeFittingControls:(id)a0;
- (id)_controlsWithViewsInPriorityOrder;
- (void)auxiliaryControlDidChangeState:(id)a0;
- (id)_overflowControl;
- (void).cxx_destruct;
- (void)avkit_intrinsicContentSizeOfSubviewWasInvalidated:(id)a0;
- (void)updateOverflowMenu;
- (id)overflowMenuItemsForControlOverflowButton:(id)a0;
- (BOOL)_requiresOverflowControl;
- (void)layoutSubviews;
- (void)overflowButtonWillShowContextMenu:(id)a0;
- (void)overflowButtonDidHideContextMenu:(id)a0;
- (void)_updatePriorityOrderControlsList;

@end
