@class NSUUID, NSData;

@interface SiriAnalyticsXPCOrderedMessageEnvelope : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSUUID *streamUUID;
@property (readonly, nonatomic) long long messageType;
@property (readonly, copy, nonatomic) NSData *messageBody;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTimestamp:(unsigned long long)a0 streamUUID:(id)a1 messageType:(long long)a2 messageBody:(id)a3;

@end
