@interface SeymourUI.TVOpenInMusicView : UICollectionReusableView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shelf;
    void /* unknown type, empty encoding */ button;
    void /* unknown type, empty encoding */ indexPath;
    void /* unknown type, empty encoding */ focusGuide;
}

- (id)initWithCoder:(id)a0;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)openInMusicPressed:(id)a0;

@end