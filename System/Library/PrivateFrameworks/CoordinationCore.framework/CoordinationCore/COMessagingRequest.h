@class NSData, NSString;

@interface COMessagingRequest : COMeshRequest

@property (readonly, nonatomic) unsigned int requestID;
@property (readonly, nonatomic) long long requestType;
@property (readonly, copy, nonatomic) NSData *payload;
@property (readonly, copy, nonatomic) NSString *payloadType;
@property (readonly, copy, nonatomic) NSString *topic;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequestID:(unsigned int)a0 requestType:(long long)a1 payload:(id)a2 payloadType:(id)a3 topic:(id)a4;

@end
