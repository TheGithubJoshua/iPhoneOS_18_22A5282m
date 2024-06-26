@class NSString, UIColor, CLInUseAssertion;
@protocol CSDNDBedtimeGreetingDelegate;

@interface CSDNDBedtimeGreetingViewController : CSModalViewControllerBase <CSModalViewDelegate> {
    UIColor *_legibilityPrimaryColor;
    CLInUseAssertion *_weatherInUseAssertion;
}

@property (weak, nonatomic) id<CSDNDBedtimeGreetingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (BOOL)handleEvent:(id)a0;
- (void).cxx_destruct;
- (void)aggregateAppearance:(id)a0;
- (void)dealloc;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (id)_greetingString;
- (id)initWithLegibilityPrimaryColor:(id)a0;
- (void)handleSecondaryActionForView:(id)a0;

@end
