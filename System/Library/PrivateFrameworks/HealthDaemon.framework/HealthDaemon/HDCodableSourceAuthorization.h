@class NSData, NSMutableArray, HDCodableSource;

@interface HDCodableSourceAuthorization : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (retain, nonatomic) NSMutableArray *authorizations;
@property (readonly, nonatomic) BOOL hasBackupUUID;
@property (retain, nonatomic) NSData *backupUUID;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) HDCodableSource *source;

+ (Class)authorizationsType;

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
- (void)addAuthorizations:(id)a0;
- (id)authorizationsAtIndex:(unsigned long long)a0;
- (unsigned long long)authorizationsCount;
- (void)clearAuthorizations;
- (id)decodedBackupUUID;
- (id)decodedSourceUUID;

@end
