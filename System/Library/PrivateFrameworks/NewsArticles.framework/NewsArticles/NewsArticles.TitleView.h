@interface NewsArticles.TitleView : UIView <NUTitleViewDelegate> {
    void /* unknown type, empty encoding */ titleContainerView;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ onTap;
}

- (void)titleViewDidTapOnTitleView:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
