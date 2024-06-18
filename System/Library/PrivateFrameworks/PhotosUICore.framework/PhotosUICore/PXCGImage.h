@interface PXCGImage : NSObject

@property (readonly, nonatomic) struct CGImage { } *image;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (void)dealloc;

@end
