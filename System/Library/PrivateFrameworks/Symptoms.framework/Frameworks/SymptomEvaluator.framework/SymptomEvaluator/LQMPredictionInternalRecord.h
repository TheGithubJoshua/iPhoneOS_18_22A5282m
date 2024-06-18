@interface LQMPredictionInternalRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int offset;
@property (readonly) unsigned int length;
@property (readonly) unsigned int level;
@property (readonly) double confidence;

- (id)initWithCoder:(id)a0;
- (void)adjustLengthTo:(unsigned int)a0;
- (id)initWithOffset:(unsigned int)a0 length:(unsigned int)a1 level:(unsigned int)a2 confidence:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (void)adjustConfidenceTo:(double)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)adjustOffsetTo:(unsigned int)a0;

@end
