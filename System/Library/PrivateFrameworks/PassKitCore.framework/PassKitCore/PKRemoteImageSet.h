@class NSString, NSSet;

@interface PKRemoteImageSet : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *images;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addURL:(id)a0 forScaleFactor:(unsigned long long)a1;
- (id)imageForScaleFactor:(unsigned long long)a0;
- (id)imageForScaleFactorValue:(double)a0;
- (id)initWithName:(id)a0 dictionaries:(id)a1;
- (id)initWithName:(id)a0 images:(id)a1;
- (BOOL)isEqualToRemoteImageSet:(id)a0;

@end
