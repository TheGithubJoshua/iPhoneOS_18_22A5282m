@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *checkmark;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentAlignmentRect;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentAlignmentInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (nonatomic) BOOL hidesCheckmark;

- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)description;
- (void)layoutSubviews;
- (void)_ck_setEditing:(BOOL)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_horizontalSafeAreaInsets;
- (void)updateCheckmarkImage;

@end
