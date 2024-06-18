@class NSXPCListener, NSString, NSXPCInterface, NSMutableArray;
@protocol AVAudioSessionServerDelegate;

@interface AVAudioSessionXPCServer : NSObject <NSXPCListenerDelegate> {
    NSMutableArray *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_callbackInterface;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _clientDeathPromise;
    struct unique_ptr<std::promise<void>, std::default_delete<std::promise<void>>> { struct __compressed_pair<std::promise<void> *, std::default_delete<std::promise<void>>> { void *__value_; } __ptr_; } _deallocPromise;
    BOOL _needsDefaultWorldInit;
    struct World { } _world;
    id<AVAudioSessionServerDelegate> _serverDelegate;
}

@property (readonly, nonatomic) NSXPCListener *listener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithDelegate:(id)a0;
- (void)removeConnection:(id)a0;
- (void)start;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)init2;

@end
