@class NSString, NSUUID, NSData;

@interface ATXUserNotificationModelScore : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *modelId;
@property (readonly, nonatomic) unsigned long long modelVersion;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double scoreTimestamp;
@property (readonly, nonatomic) NSUUID *scoreUUID;
@property (readonly, nonatomic) NSData *scoreInfo;

- (id)initWithCoder:(id)a0;
- (id)initFromJSON:(id)a0;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)jsonRepresentation;
- (id)initFromModelScoreData:(id)a0 modelVersion:(unsigned long long)a1 score:(double)a2 scoreTimestamp:(double)a3 scoreUUID:(id)a4 scoreInfo:(id)a5;
- (BOOL)isEqualToATXUserNotificationModelScore:(id)a0;

@end
