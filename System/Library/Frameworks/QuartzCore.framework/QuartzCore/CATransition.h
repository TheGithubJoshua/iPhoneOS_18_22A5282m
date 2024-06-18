@class NSDictionary, NSString;

@interface CATransition : CAAnimation

@property (copy) NSDictionary *options;
@property unsigned int transitionFlags;
@property (copy) NSString *type;
@property (copy) NSString *subtype;
@property float startProgress;
@property float endProgress;

- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (id)filter;
- (unsigned int)_propertyFlagsForLayer:(id)a0;
- (void)setFilter:(id)a0;

@end
