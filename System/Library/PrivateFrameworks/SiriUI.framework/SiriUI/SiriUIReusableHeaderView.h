@class UIColor, NSString, SiriUISnippetViewController, UIImageView, UILabel, UIButton;

@interface SiriUIReusableHeaderView : UICollectionReusableView <SiriUIReusableView, SiriUISizableHeaderView> {
    UILabel *_headerLabel;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsets;
    UIImageView *_chevronView;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIButton *headerAreaButton;
@property (weak, nonatomic) SiriUISnippetViewController *snippetViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultHeight;
+ (id)elementKind;
+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)a0;
- (void)_configureHeaderLabelForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
