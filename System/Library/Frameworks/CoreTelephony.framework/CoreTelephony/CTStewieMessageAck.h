@class NSError;

@interface CTStewieMessageAck : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long transportType;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToMessageAck:(id)a0;

@end
