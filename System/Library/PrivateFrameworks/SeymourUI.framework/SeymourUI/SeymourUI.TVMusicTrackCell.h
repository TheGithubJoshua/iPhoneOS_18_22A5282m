@interface SeymourUI.TVMusicTrackCell : SeymourUI.TVFocusableCollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ floatingView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end