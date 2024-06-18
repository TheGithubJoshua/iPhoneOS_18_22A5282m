@class PXVideoOverlayButtonConfiguration;

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton> {
    PXVideoOverlayButtonConfiguration *_overlayConfiguration;
    id _target;
    SEL _action;
}

@property (nonatomic, setter=_setDidConfigureForPause:) BOOL _didConfigureForPause;
@property (nonatomic) BOOL showAsPause;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_handleTap:(id)a0;
- (void)setTarget:(id)a0 action:(SEL)a1;

@end
