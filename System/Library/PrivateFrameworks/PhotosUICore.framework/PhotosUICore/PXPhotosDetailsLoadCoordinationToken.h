@class PXPhotosDetailsLoadCoordinator;

@interface PXPhotosDetailsLoadCoordinationToken : NSObject {
    BOOL _didComplete;
}

@property (readonly, weak, nonatomic) PXPhotosDetailsLoadCoordinator *_loadCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)complete;
- (void)_timeout;
- (id)_initWithLoadCoordinator:(id)a0;

@end
