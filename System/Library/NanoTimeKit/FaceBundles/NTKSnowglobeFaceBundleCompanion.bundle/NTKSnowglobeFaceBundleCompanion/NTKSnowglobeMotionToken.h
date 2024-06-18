@class NTKSnowglobeMotionManager;

@interface NTKSnowglobeMotionToken : NSObject {
    NTKSnowglobeMotionManager *_manager;
}

@property (readonly, nonatomic) BOOL invalidated;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithMotionManager:(id)a0;

@end
