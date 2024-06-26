@class NSString;

@interface PTTensorSwapPair : NSObject {
    NSString *_names[2];
    struct __CVBuffer *_tensorPair[2];
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIOSurfaces:(struct __IOSurface **)a0 names:(id)a1;
- (id)tensorNameWithIndex:(int)a0;
- (struct __CVBuffer { } *)tensorWithIndex:(int)a0;

@end
