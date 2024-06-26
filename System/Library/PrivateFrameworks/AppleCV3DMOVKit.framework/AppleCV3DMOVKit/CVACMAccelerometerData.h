@class CVACLMotionTypeVector3;

@interface CVACMAccelerometerData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CVACLMotionTypeVector3 *acceleration;
@property (nonatomic) double timestamp;
@property (nonatomic) float temperature;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) unsigned long long frameId;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;

@end
