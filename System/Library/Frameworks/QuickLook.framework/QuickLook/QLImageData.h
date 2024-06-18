@interface QLImageData : NSObject {
    struct CGImageSource { } *_imageSource;
}

- (long long)orientation;
- (struct CGSize { double x0; double x1; })size;
- (id)durations;
- (void)dealloc;
- (id)type;
- (unsigned long long)count;
- (id)imageAtIndex:(unsigned long long)a0;
- (id)initWithImageSource:(struct CGImageSource { } *)a0;

@end
