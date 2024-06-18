@interface CAExternalAnimation : CAPropertyAnimation

@property (readonly) unsigned long long animId;
@property (copy) id /* block */ presentationBlock;

+ (id)animationWithKeyPath:(id)a0;

- (BOOL)_setCARenderAnimation:(void *)a0 layer:(id)a1;
- (void *)_copyRenderAnimationForLayer:(id)a0;
- (void)applyForTime:(double)a0 presentationObject:(id)a1 modelObject:(id)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setAnimId:(unsigned long long)a0;

@end
