@class BMTopicEntity, BMPersonEntity;

@interface BMEntity : NSObject <BMProtoBufWrapper>

@property (readonly, nonatomic) BOOL isPersonType;
@property (readonly, nonatomic) BOOL isTopicType;
@property (readonly, nonatomic) BMTopicEntity *topicEntity;
@property (readonly, nonatomic) BMPersonEntity *personEntity;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIsPersonType:(BOOL)a0 isTopicType:(BOOL)a1 topicEntity:(id)a2 personEntity:(id)a3;
- (id)initWithPersonEntity:(id)a0;
- (id)initWithTopicEntity:(id)a0;

@end
