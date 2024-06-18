@class NSString;

@interface VCCallInfoBlob : PBCodable <NSCopying>

@property (nonatomic) unsigned int callID;
@property (nonatomic) unsigned int clientVersion;
@property (retain, nonatomic) NSString *deviceType;
@property (retain, nonatomic) NSString *frameworkVersion;
@property (retain, nonatomic) NSString *osVersion;

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
- (id)stringForCheckpoint;

@end
