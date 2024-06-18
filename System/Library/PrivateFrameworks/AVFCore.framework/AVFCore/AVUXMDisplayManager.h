@class AVDisplayCriteria;

@interface AVUXMDisplayManager : NSObject {
    AVDisplayCriteria *_preferredDisplayCriteria;
}

@property (class, readonly, nonatomic) AVUXMDisplayManager *sharedAVKitUXMDisplayManager;

@property (copy, nonatomic) AVDisplayCriteria *preferredDisplayCriteria;

- (id)init;
- (id)initInternal;
- (void)dealloc;
- (void)_updateUXMWithDisplayCriteria:(id)a0;
- (void)_updateUXMWithDisplayCriteriaWithLock:(id)a0;
- (id)currentUXMDisplayCriteria;

@end
