@interface WKPDFPageNumberIndicator : UIView {
    struct RetainPtr<UILabel> { void *m_ptr; } _label;
    struct RetainPtr<_UIBackdropView> { void *m_ptr; } _backdropView;
    struct RetainPtr<NSTimer> { void *m_ptr; } _timer;
    BOOL _hasValidPageCountAndCurrentPage;
}

@property (nonatomic) unsigned int currentPageNumber;
@property (nonatomic) unsigned int pageCount;

- (void)show;
- (void)hide;
- (void)_updateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)hide:(id)a0;
- (void)dealloc;
- (void)_makeRoundedCorners;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;

@end
