@protocol LPComponentViewHost;

@interface LPComponentView : UIView

@property (readonly, weak, nonatomic) id<LPComponentViewHost> host;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithHost:(id)a0;
- (void)layoutSubviews;
- (void)componentViewDidMoveToWindow;
- (void)layoutComponentView;
- (BOOL)shouldAllowHighlightToRecognizeSimultaneouslyWithGesture:(id)a0;

@end
