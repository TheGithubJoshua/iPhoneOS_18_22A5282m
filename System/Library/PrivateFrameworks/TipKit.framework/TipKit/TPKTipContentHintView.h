@interface TPKTipContentHintView : TPKContentView {
    void /* unknown type, empty encoding */ bottomSeparatorView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithReusableTipView:(id)a0;
- (id)initWithContentController:(id)a0 tipContent:(id)a1;
- (void)contentSizeCategoryDidChange:(id)a0;
- (id)initWithController:(id)a0 content:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)resetHostingView;
- (void)updateContentBackgroundColor:(id)a0;
- (void)bottomSeperatorNeedsUpdate;

@end
