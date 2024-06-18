@class NSString;

@interface REFileImage : REImage

@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, nonatomic) double scale;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithPath:(id)a0 scale:(double)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
