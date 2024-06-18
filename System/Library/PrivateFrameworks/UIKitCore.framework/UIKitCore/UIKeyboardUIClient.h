@class BSServiceConnection;
@protocol BSServiceConnectionClient, UIKeyboardUIServiceProtocol;

@interface UIKeyboardUIClient : NSObject {
    BSServiceConnection<BSServiceConnectionClient> *_connection;
    id<UIKeyboardUIServiceProtocol> _remoteTarget;
}

+ (id)sharedInstance;
+ (id)serviceInterface;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_initConnectionIfNeeded;
- (void)setKeyboardAlpha:(double)a0;
- (id)snapshotViewForOptions:(unsigned long long)a0;

@end
