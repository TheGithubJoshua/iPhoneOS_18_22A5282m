@class NSString, AuthCredential;

@interface SharedChannelCreateRequest : PBRequest <NSCopying> {
    struct { unsigned char channelOwnershipType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasChannelTopic;
@property (retain, nonatomic) NSString *channelTopic;
@property (readonly, nonatomic) BOOL hasAuthCredential;
@property (retain, nonatomic) AuthCredential *authCredential;
@property (nonatomic) BOOL hasChannelOwnershipType;
@property (nonatomic) int channelOwnershipType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsChannelOwnershipType:(id)a0;
- (id)channelOwnershipTypeAsString:(int)a0;

@end