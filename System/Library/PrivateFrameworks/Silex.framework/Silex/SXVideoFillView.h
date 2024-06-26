@class SXImageView, SXVideoFill, NSString, SXClippingView, SXImageResource, SXVideoFillPlayerView;

@interface SXVideoFillView : SXFillView <SXViewportChangeListener>

@property (retain, nonatomic) SXClippingView *clippingView;
@property (retain, nonatomic) SXVideoFillPlayerView *playerView;
@property (retain, nonatomic) SXImageResource *imageResource;
@property (readonly, nonatomic) SXImageView *imageView;
@property (readonly, nonatomic) SXVideoFill *videoFill;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)load;
- (void)play;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)pause;
- (BOOL)accessibilityIgnoresInvertColors;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)reset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fillFrameWithBoundingSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithVideoFill:(id)a0 DOMObjectProvider:(id)a1 imageViewFactory:(id)a2;

@end
