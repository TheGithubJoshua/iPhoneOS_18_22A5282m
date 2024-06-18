@class NSUUID, NSMutableDictionary;

@interface CCUIAnimationBatch : NSObject {
    NSMutableDictionary *_animationsByParameters;
}

@property (readonly, copy, nonatomic) NSUUID *UUID;

- (id)init;
- (void)iterateAnimationsWithBlock:(id /* block */)a0;
- (void)addAnimation:(id)a0;
- (void).cxx_destruct;
- (void)iterateAnimationsOfType:(Class)a0 withBlock:(id /* block */)a1;

@end
