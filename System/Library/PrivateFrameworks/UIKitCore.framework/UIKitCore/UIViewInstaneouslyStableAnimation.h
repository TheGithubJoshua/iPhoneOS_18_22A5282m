@class NSString;
@protocol UIVectorOperatable;

@interface UIViewInstaneouslyStableAnimation : NSObject <UIIntervalAnimating> {
    id<UIVectorOperatable> _velocity;
}

@property (retain, nonatomic) id<UIVectorOperatable> targetValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setVelocity:(id)a0;
- (id)initWithTargetValue:(id)a0 velocity:(id)a1;
- (id)velocity;
- (id)stepWithDelta:(double)a0;
- (void).cxx_destruct;
- (BOOL)isStable;
- (id)value;

@end
