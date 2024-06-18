@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain

@property (readonly, nonatomic) int ambientLightType;

- (id)jsonDict;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isEqualToATXPredictionAmbientLightContext:(id)a0;
- (id)initWithAmbientLightType:(int)a0;

@end
