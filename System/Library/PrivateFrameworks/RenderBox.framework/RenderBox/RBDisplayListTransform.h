@interface RBDisplayListTransform : NSObject <NSCopying> {
    struct DisplayListTransform { struct vector<RB::DisplayListTransform::Term, 1UL, unsigned int> { unsigned char _p[24]; struct Term *_p; unsigned int _size; unsigned int _capacity; } _terms; } _transform;
}

+ (id)transform;

- (void)removeAll;
- (void)addEraserClip;
- (void)addColorReplacementTo:(struct { float x0; float x1; float x2; float x3; })a0 colorSpace:(int)a1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addColorReplacementFrom:(struct { float x0; float x1; float x2; float x3; })a0 to:(struct { float x0; float x1; float x2; float x3; })a1 colorSpace:(int)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToDisplayList:(id)a0;
- (id)applyingToDisplayList:(id)a0;

@end
