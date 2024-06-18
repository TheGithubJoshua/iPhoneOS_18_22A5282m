@class NSNumber;

@interface CSBackgroundComponent : CSComponent

@property (nonatomic) NSNumber *style;
@property (nonatomic) double transitionProgress;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)style:(id)a0;

@end
