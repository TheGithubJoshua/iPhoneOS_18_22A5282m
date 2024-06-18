@class NSString, SBWindowScene;

@interface SBPresentationObservationToken : NSObject <BSInvalidatable>

@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (readonly, nonatomic) long long state;
@property (copy, nonatomic) id /* block */ willPresentHandler;
@property (copy, nonatomic) id /* block */ didPresentHandler;
@property (copy, nonatomic) id /* block */ willDismissHandler;
@property (copy, nonatomic) id /* block */ didDismissHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDismiss;
- (void)didPresent;
- (void)didDismiss;
- (void)invalidate;
- (void).cxx_destruct;
- (void)willPresent;
- (id)initWithScene:(id)a0;

@end
