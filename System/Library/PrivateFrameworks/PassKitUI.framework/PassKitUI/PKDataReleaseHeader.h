@class UILabel, UIButton, UIImageView;
@protocol PKDataReleaseHeaderDelegate;

@interface PKDataReleaseHeader : UIView {
    id<PKDataReleaseHeaderDelegate> _delegate;
    UILabel *_label;
    UIButton *_dismissButton;
    UIImageView *_logo;
}

- (id)initWithDelegate:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)layoutSubviews;

@end
