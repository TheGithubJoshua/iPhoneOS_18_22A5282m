@class UIImage;

@interface REImageImage : REImage

@property (retain, nonatomic) UIImage *uiImage;

- (id)initWithCoder:(id)a0;
- (id)initWithImage:(id)a0;
- (id)image;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
