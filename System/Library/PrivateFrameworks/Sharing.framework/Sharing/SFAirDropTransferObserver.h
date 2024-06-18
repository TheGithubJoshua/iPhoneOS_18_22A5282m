@class NSString, NSMutableDictionary;
@protocol SFAirDropTransferObserverDelegate;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol>

@property (retain) NSMutableDictionary *transferIdentifierToTransfer;
@property (weak, nonatomic) id<SFAirDropTransferObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldEscapeXpcTryCatch;
- (id)init;
- (void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)remoteObjectInterface;
- (void)_getRemoteObjectProxyOnQueue:(id /* block */)a0;
- (void)activate;
- (id)machServiceName;
- (void)invalidate;
- (void).cxx_destruct;
- (void)removedTransfer:(id)a0;
- (id)exportedInterface;
- (void)updateActionHandlersOnTransfer:(id)a0;
- (void)observeForLocalOnlyPropertiesOnTransfer:(id)a0;
- (void)updatedTransfer:(id)a0;

@end
