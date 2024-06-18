@class UIColor, NSString, UIImageView, UILongPressGestureRecognizer;
@protocol UITableConstants, _UICollectionViewListCellReorderControlDelegate;

@interface _UICollectionViewListCellReorderControl : UIControl <UIGestureRecognizerDelegate> {
    UIImageView *_imageView;
    UILongPressGestureRecognizer *_reorderRecognizer;
    BOOL _tracking;
    BOOL _needsImageViewUpdate;
}

@property (weak, nonatomic) id<_UICollectionViewListCellReorderControlDelegate> delegate;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateImageViewIfNeeded;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)pan:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)_setNeedsImageViewUpdate;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 constants:(id)a1;
- (void)gestureMovedToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)endReordering:(BOOL)a0;
- (void)beginReordering;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })_minimumSizeForHitTesting;

@end
