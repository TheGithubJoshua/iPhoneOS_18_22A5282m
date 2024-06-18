@class NSString, NCLongLookTransitioningDelegate, UIView;
@protocol PLExpandedPlatterDismissing, PLClickPresentationInteractionPresenting;

@interface NCNotificationLongLookViewController : NCNotificationViewController <NCNotificationLongLookViewDelegate, PLExpandedPlatterPresentationControllerDelegate, NCLongLookDefaultPresentationControllerDelegate, NCNotificationCustomContentDelegate, PLClickPresentationInteractionPresentable, PLExpandedPlatterDismissing, PLExpandedPlatterPresentationViewDelegate, PLExpandedPlatterPresentable> {
    NCLongLookTransitioningDelegate *_longLookTransitionDelegate;
    id _cancelTouchesToken;
}

@property (copy, nonatomic, getter=_notificationTapBlock, setter=_setNotificationTapBlock:) id /* block */ notificationTapBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PLClickPresentationInteractionPresenting> presenter;
@property (readonly, nonatomic) UIView *viewWithContent;
@property (readonly, nonatomic) UIView *viewForTouchContinuation;
@property (weak, nonatomic) id<PLExpandedPlatterDismissing> dismisser;

+ (void)initialize;

- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dismissViewControllerWithTransition:(int)a0 completion:(id /* block */)a1;
- (void)loadView;
- (BOOL)becomeFirstResponder;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)canResignFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)setNotificationRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)_scrollView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isContentExtensionVisible:(id)a0;
- (id)_extensionIdentifier;
- (void)_dismissPresentedViewControllerAnimated:(BOOL)a0;
- (id)_longLookViewLoadingIfNecessary;
- (void)_setPreferredCustomContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)_expandedPlatterPresentationViewLoadingIfNecessary:(BOOL)a0;
- (id)_expandedPlatterPresentationViewScrollView;
- (void)_handleIconButton:(id)a0;
- (void)_handleNotificationTap:(id)a0;
- (id)_initWithNotificationRequest:(id)a0 andPresentingNotificationViewController:(id)a1 revealingAdditionalContentOnPresentation:(BOOL)a2;
- (id)_initWithNotificationRequest:(id)a0 revealingAdditionalContentOnPresentation:(BOOL)a1;
- (void)_loadLookView;
- (id)_longLookViewIfLoaded;
- (id)_longLookViewScrollView;
- (unsigned long long)_maximumNumberOfPrimaryTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfSecondaryTextLinesForProvidedStaticContent;
- (unsigned long long)_maximumNumberOfTextLinesForProvidedStaticContentWithDefaultNumber:(unsigned long long)a0 isPrimary:(BOOL)a1 isLarge:(BOOL)a2;
- (void)_notificationViewControllerViewDidLoad;
- (struct CGSize { double x0; double x1; })_preferredCustomContentSizeForSize:(struct CGSize { double x0; double x1; })a0 parentContentContainerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_presentedLongLookViewController;
- (id)_presentingNotificationViewController;
- (BOOL)_shouldPadScrollViewContentSizeHeight;
- (void)_updateLookView:(id)a0 withTitleFromProvidedStaticContent:(id)a1;
- (void)_updateTitleWithProvidedCustomContent;
- (void)_updateWithProvidedCustomContent;
- (void)_updateWithProvidedStaticContent;
- (BOOL)associatedViewControllerDidAppearForExpandedPlatterView:(id)a0;
- (void)contentProviderDismissCustomContent:(id)a0 animated:(BOOL)a1;
- (id)customBackgroundContainerViewForExpandedPlatterPresentationController:(id)a0;
- (void)customContent:(id)a0 didUpdateUserNotificationActions:(id)a1;
- (void)customContentDidLoadExtension:(id)a0;
- (void)customContentDidUpdateTitle:(id)a0;
- (void)expandedPlatterPresentable:(id)a0 requestsDismissalWithTrigger:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expandedPlatterPresentationController:(id)a0 frameForTransitionViewInPresentationSuperview:(id)a1;
- (id)expandedPlatterPresentationController:(id)a0 keyboardAssertionForGestureWindow:(id)a1;
- (BOOL)expandedPlatterPresentationControllerShouldAllowKeyboardOnAppearance:(id)a0;
- (BOOL)expandedPlatterPresentationControllerShouldProvideBackground:(id)a0;
- (id)expandedPlatterViewForPresentationView:(id)a0;
- (id)hideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)a0;
- (BOOL)isLookStyleLongLook;
- (BOOL)notificationLongLookView:(id)a0 tapGestureRecognizerShouldReceiveTouch:(id)a1;
- (void)notificationLongLookView:(id)a0 willInteractWithURL:(id)a1;
- (void)playMedia;
- (void)presentLongLookAnimated:(BOOL)a0 trigger:(long long)a1 completion:(id /* block */)a2;
- (void)preserveInputViews;
- (BOOL)restoreInputViews;
- (void)setCustomContentHomeAffordanceGestureRecognizer:(id)a0;
- (void)setCustomContentHomeAffordanceVisible:(BOOL)a0;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForExpandedPlatterPresentationController:(id)a0;
- (id)unhideHomeAffordanceAnimationSettingsForExpandedPlatterPresentationController:(id)a0;
- (long long)viewControllerTransitionTypeForTransitionDelegate:(id)a0;

@end