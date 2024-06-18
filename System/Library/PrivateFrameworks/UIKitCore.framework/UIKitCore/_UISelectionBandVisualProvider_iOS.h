@class NSString, UIPointerInteraction, UIView;

@interface _UISelectionBandVisualProvider_iOS : NSObject <UIPointerInteractionDelegate, _UISelectionBandVisualProviding>

@property (retain, nonatomic) UIPointerInteraction *ptrInteraction;
@property (nonatomic) struct CGPoint { double x; double y; } initialPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIView *view;
@property (nonatomic) BOOL enabled;

- (void)updateWithPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)endAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_isActive;
- (void).cxx_destruct;
- (void)beginAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;

@end
