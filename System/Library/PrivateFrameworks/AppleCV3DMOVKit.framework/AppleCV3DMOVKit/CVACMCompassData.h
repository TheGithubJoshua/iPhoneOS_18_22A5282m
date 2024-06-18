@class CVACLMotionTypeVector3;

@interface CVACMCompassData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CVACLMotionTypeVector3 *fieldValues;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) unsigned long long frameId;

+ (id)classes;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
