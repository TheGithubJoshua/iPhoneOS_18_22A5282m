@class NSNumber;

@interface CTSignalStrengthInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *bars;
@property (retain, nonatomic) NSNumber *displayBars;
@property (retain, nonatomic) NSNumber *maxDisplayBars;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
