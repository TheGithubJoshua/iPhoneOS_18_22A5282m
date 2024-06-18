@class PDSProtoUserPushToken, NSMutableArray;

@interface PDSProtoUserPushTokenRegRequest : PBRequest <NSCopying> {
    struct { unsigned char ttl : 1; } _has;
}

@property (retain, nonatomic) PDSProtoUserPushToken *userPushToken;
@property (retain, nonatomic) NSMutableArray *deviceInfos;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) long long ttl;
@property (retain, nonatomic) NSMutableArray *topics;

+ (Class)topicType;
+ (Class)deviceInfoType;

- (void)clearTopics;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)topicsCount;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDeviceInfo:(id)a0;
- (void)addTopic:(id)a0;
- (void)clearDeviceInfos;
- (id)deviceInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)deviceInfosCount;
- (id)topicAtIndex:(unsigned long long)a0;

@end
