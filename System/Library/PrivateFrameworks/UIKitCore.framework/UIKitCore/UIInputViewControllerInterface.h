@class NSString, _UIInputViewControllerState;
@protocol _UIIVCInterface, _UIIVCResponseDelegate;

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface>

@property (retain, nonatomic, getter=_cachedState, setter=_setCachedState:) _UIInputViewControllerState *cachedState;
@property (retain, nonatomic) id<_UIIVCInterface> forwardingInterface;
@property (retain, nonatomic) id<_UIIVCResponseDelegate> responseDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)syncToKeyboardState:(id)a0 completionHandler:(id /* block */)a1;
- (void)_handleInputViewControllerState:(id)a0;
- (void)_tearDownRemoteService;

@end
