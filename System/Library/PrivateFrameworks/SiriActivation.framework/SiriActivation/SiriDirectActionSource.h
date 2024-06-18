@protocol SiriDirectActionSourceDelegate;

@interface SiriDirectActionSource : SiriActivationSource

@property (weak, nonatomic) id<SiriDirectActionSourceDelegate> delegate;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)configureConnection;
- (void)activateWithContext:(id)a0;
- (void)activateWithContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)canActivateChangedTo:(id)a0;

@end
