@class NSURL;

@interface PrefsUILinkLabel : UILabel {
    NSURL *_url;
    BOOL _touchingURL;
}

@property (retain, nonatomic) NSURL *URL;
@property (weak, nonatomic) id target;
@property (nonatomic) SEL action;

- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)openURL:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)color:(id)a0 byMultiplyingSubComponentsBy:(float)a1;
- (void)tappedLink:(id)a0;

@end
