@class UIWindow;

@interface CKRotationLockUtility : NSObject

@property (weak, nonatomic) UIWindow *lockedWindow;

- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)releaseRotationLock;

@end
