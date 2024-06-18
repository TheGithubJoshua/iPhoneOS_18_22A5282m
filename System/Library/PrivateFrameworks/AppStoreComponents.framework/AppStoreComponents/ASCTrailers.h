@class ASCMediaPlatform, NSArray;

@interface ASCTrailers : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) ASCMediaPlatform *mediaPlatform;
@property (readonly, copy, nonatomic) NSArray *videos;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVideos:(id)a0 mediaPlatform:(id)a1;

@end
