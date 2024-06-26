@class NSArray, UIImpactFeedbackGenerator, NSString;
@protocol NCNotificationListRevealCoordinatorDelegate;

@interface NCNotificationListRevealCoordinator : NSObject <NCNotificationListViewScrollDelegate>

@property (nonatomic) int revealState;
@property (nonatomic) double revealPercentage;
@property (nonatomic, getter=isSectionRevealed) BOOL sectionRevealed;
@property (nonatomic, getter=isSectionRevealedStateLocked) BOOL sectionRevealedStateLocked;
@property (nonatomic) BOOL shouldLimitTargetContentOffsetForNotificationListReveal;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic, getter=isHapticPrepared) BOOL hapticPrepared;
@property (weak, nonatomic) id<NCNotificationListRevealCoordinatorDelegate> delegate;
@property (nonatomic, getter=isForceRevealed) BOOL forceRevealed;
@property (nonatomic) unsigned long long indexForReveal;
@property (retain, nonatomic) NSArray *subLists;
@property (nonatomic) double interactionTranslation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notificationListViewWillEndDragging:(id)a0 withTargetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a1;
- (void)notificationListDidScroll:(id)a0;
- (void)_refetchSubListViews;
- (void)_performRevealForSubviewsIfNecessary;
- (BOOL)_isRevealSectionVisibleForListView:(id)a0;
- (BOOL)_shouldAllowNotificationListReveal;
- (BOOL)_revealSectionHasContent;
- (void)_releaseHaptic;
- (void)notificationListWillBeginDragging:(id)a0;
- (double)_updateRevealPercentageForNotificationListView:(id)a0;
- (void)_performHaptic;
- (void).cxx_destruct;
- (id)_stringForRevealState:(int)a0;
- (void)notificationListViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (double)_settlingYPositionForReveal;
- (id)_revealListView;
- (BOOL)_shouldAllowNotificationListRevealTransition;
- (void)_prepareHaptic;
- (BOOL)_isRevealed;
- (void)notificationListViewDidEndDecelerating:(id)a0;

@end
