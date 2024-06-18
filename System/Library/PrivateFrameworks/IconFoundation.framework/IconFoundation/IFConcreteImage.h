@interface IFConcreteImage : IFImage {
    struct CGImage { } *_CGImage;
    double _scale;
    unsigned long long _validationFlags;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
}

- (struct CGImage { } *)_CGImage;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (void)setValidationFlags:(unsigned long long)a0;
- (unsigned long long)validationFlags;
- (BOOL)placeholder;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (void)setPlaceholder:(BOOL)a0;
- (struct CGImage { } *)CGImage;
- (id)_init;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)description;
- (double)scale;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;

@end
