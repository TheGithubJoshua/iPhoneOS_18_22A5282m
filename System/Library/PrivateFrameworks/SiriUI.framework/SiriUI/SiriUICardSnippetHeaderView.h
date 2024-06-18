@class SiriSharedUIContentLabel;

@interface SiriUICardSnippetHeaderView : SiriUIReusableHeaderView {
    SiriSharedUIContentLabel *_titleLabel;
}

+ (double)defaultHeight;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithTitle:(id)a0;

@end
