@class NCNotificationListCoalescingControlsView, NCNotificationListHeaderTitleView, NSString, _UILegibilitySettings;
@protocol NCNotificationListCoalescingControlsHandlerDelegate;

@interface NCNotificationListCoalescingHeaderCell : UIView <NCNotificationListCoalescingControlsViewDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler, MTMaterialGrouping>

@property (retain, nonatomic) NCNotificationListCoalescingControlsView *coalescingControlsView;
@property (retain, nonatomic) NCNotificationListHeaderTitleView *headerTitleView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *clearAllText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (weak, nonatomic) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate;
@property (copy, nonatomic) NSString *materialGroupNameBase;

+ (struct CGSize { double x0; double x1; })_coalescingControlsViewPreferredSize;
+ (double)coalescingHeaderCellHeightForWidth:(double)a0 title:(id)a1;

- (BOOL)dismissModalFullScreenIfNeeded;
- (void)_contentSizeCategoryDidChange;
- (void)_configureHeaderTitleViewIfNecessary;
- (BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint { double x0; double x1; })a0;
- (void)adjustForLegibilitySettingsChange:(id)a0;
- (void)resetClearButtonStateAnimated:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_layoutHeaderTitleView;
- (void)layoutSubviews;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_coalescingControlsViewFrameForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_configureCoalescingControlsViewIfNecessary;
- (void)_layoutCoalescingControlsView;
- (id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCoalescingControlsView:(id)a0 didTransitionToClearState:(BOOL)a1;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)a0;
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)a0;
- (void)notificationListCoalescingControlsViewRequestsClear:(id)a0;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(id)a0;
- (void)notificationListCoalescingControlsViewRequestsRestack:(id)a0;

@end
