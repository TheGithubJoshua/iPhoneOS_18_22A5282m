@interface ATXPredictionContextDomain : NSObject <ATXProtoBufWrapper>

- (id)jsonDict;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)encodeAsProto;

@end
