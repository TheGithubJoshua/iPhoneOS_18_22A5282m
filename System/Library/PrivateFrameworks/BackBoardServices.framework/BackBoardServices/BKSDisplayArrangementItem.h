@class NSString;

@interface BKSDisplayArrangementItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *displayUUID;
@property (readonly, copy, nonatomic) NSString *relativeDisplayUUID;
@property (readonly, nonatomic) unsigned int edge;
@property (readonly, nonatomic) double offset;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithDisplayUUID:(id)a0 relativeToDisplayUUID:(id)a1 alongEdge:(unsigned int)a2 atOffset:(double)a3;

@end
