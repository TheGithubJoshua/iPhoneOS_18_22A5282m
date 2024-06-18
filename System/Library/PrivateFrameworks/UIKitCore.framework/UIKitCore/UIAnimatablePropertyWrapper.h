@class UIAnimatableProperty;

@interface UIAnimatablePropertyWrapper : UIAnimatablePropertyBase

@property (readonly, nonatomic) UIAnimatableProperty *animatableProperty;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)init;
- (void)setTransformer:(id)a0;
- (id)transformer;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;

@end
