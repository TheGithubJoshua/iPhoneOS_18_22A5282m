@class NSNumber;

@interface CTPriVersion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *majorVersion;
@property (retain, nonatomic) NSNumber *minorVersion;
@property (retain, nonatomic) NSNumber *releaseVersion;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
