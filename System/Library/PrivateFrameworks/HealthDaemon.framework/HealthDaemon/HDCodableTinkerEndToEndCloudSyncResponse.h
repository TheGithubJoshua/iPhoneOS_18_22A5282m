@class NSString, HDCodableError;

@interface HDCodableTinkerEndToEndCloudSyncResponse : PBCodable <NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) HDCodableError *error;

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

@end
