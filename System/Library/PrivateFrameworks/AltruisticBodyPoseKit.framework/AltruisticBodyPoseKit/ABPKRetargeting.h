@class NSUUID;

@interface ABPKRetargeting : NSObject {
    NSUUID *_skeletonIdentifier;
    struct CoreIKSolver { } *_coreIKSolver;
}

- (id)init;
- (id)processData:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_retargetSkeleton:(id)a0;

@end
