@class NSData;

@interface AWDMDNSResponderResolveStatsDNSServer : PBCodable <NSCopying> {
    struct { unsigned char networkType : 1; unsigned char serverID : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAddress;
@property (retain, nonatomic) NSData *address;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (nonatomic) BOOL hasServerID;
@property (nonatomic) unsigned int serverID;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;

@end
