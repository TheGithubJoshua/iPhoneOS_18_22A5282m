@class NSData;

@interface BMSiriMemoryReferenceResolutionEntityValue : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) double timestamp;
@property (readonly, copy, nonatomic) NSData *valueData;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (id)proto;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTimestamp:(double)a0 valueData:(id)a1;

@end
