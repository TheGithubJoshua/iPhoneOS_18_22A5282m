@class UITapGestureRecognizer, UIActivityIndicatorView, SXQuickLookViewController, UILabel, NFStateMachine, NFStateMachineState;
@protocol SXQuickLookComponentFileProvider, SXQuickLookModule;

@interface SXQuickLookComponentView : SXComponentView

@property (readonly, nonatomic) id<SXQuickLookModule> quickLookModule;
@property (readonly, nonatomic) id<SXQuickLookComponentFileProvider> fileProvider;
@property (readonly, nonatomic) NFStateMachine *stateMachine;
@property (readonly, nonatomic) NFStateMachineState *idleState;
@property (readonly, nonatomic) NFStateMachineState *loadingState;
@property (readonly, nonatomic) NFStateMachineState *presentingState;
@property (readonly, nonatomic) NFStateMachineState *errorState;
@property (readonly, nonatomic) UIActivityIndicatorView *loadingIndicator;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (retain, nonatomic) UILabel *errorLabel;
@property (retain, nonatomic) SXQuickLookViewController *quickLookViewController;

- (void)configure;
- (void)discardContents;
- (void)layout;
- (void).cxx_destruct;
- (void)handleTap;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderContents;
- (void)layoutErrorView;
- (id)createIdleState;
- (id)createErrorState;
- (id)createLoadingState;
- (id)createPresentingState;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 fileProvider:(id)a4 quickLookModule:(id)a5;
- (void)layoutLoadingIndicator;
- (void)layoutWebView;

@end
