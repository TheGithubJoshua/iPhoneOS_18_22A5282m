@interface UICollectionViewControllerWrapperView : UIView

- (id)_deepestActionResponder;
- (void)didMoveToSuperview;
- (id)_viewControllerToNotifyOnLayoutSubviews;
- (id)preferredFocusedView;
- (id)_collectionViewController;

@end
