@class NSString, BSServiceInterface, NSMutableSet, BSServiceQuality, BSServiceConnectionListener;
@protocol SBSSystemApertureSceneCreationRequestServerDelegate;

@interface SBSSystemApertureSceneCreationRequestServer : NSObject <BSServiceConnectionListenerDelegate, SBSSystemApertureSceneCreationRequestInterface> {
    BSServiceConnectionListener *_connectionListener;
    BOOL _isAvailable;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _connectionsLock;
    NSMutableSet *_connectionsLock_connections;
}

@property (class, readonly, weak, nonatomic) SBSSystemApertureSceneCreationRequestServer *activeInstance;
@property (class, readonly, copy, nonatomic) NSString *identifier;
@property (class, readonly, copy, nonatomic) BSServiceInterface *interface;
@property (class, readonly, copy, nonatomic) BSServiceQuality *serviceQuality;

@property (weak, nonatomic) id<SBSSystemApertureSceneCreationRequestServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void)_addConnection:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_removeConnection:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)startServer;
- (void)dealloc;
- (void)requestSystemApertureSceneForCurrentProcess;
- (oneway void)requestSystemApertureSceneWithRequestIdentifier:(id)a0;

@end
