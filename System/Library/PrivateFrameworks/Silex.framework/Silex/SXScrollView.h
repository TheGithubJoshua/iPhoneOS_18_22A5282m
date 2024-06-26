@class SXAXCustomRotorProvider, NSString;
@protocol SXScrollViewDelegate;

@interface SXScrollView : TSDScrollView <SXAXElementOccluder>

@property (retain, nonatomic) SXAXCustomRotorProvider *customRotorProvider;
@property (weak, nonatomic) id<SXScrollViewDelegate> scrollViewDelegate;
@property (readonly, nonatomic) BOOL isBouncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFocused;
- (BOOL)canBecomeFirstResponder;
- (id)accessibilityCustomRotors;
- (BOOL)_accessibilityScrollingEnabled;
- (BOOL)shouldOccludeAccessibilityElement:(id)a0;

@end
