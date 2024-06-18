@interface _UIImageIOSurfaceContent : _UIImageContent {
    struct __IOSurface { } *_surfaceRef;
}

- (BOOL)canEmitDrawingCommands;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)canDrawImage;
- (id)initWithScale:(double)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (struct __IOSurface { } *)IOSurface;
- (void)dealloc;
- (id)initWithIOSurface:(struct __IOSurface { } *)a0 scale:(double)a1;
- (BOOL)isIOSurface;

@end
