@class NSMutableArray;

@interface MFSpringAnimationDelegate : NSObject

@property (readonly, nonatomic) NSMutableArray *completionBlocks;

- (id)init;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;

@end
