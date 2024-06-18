@class NSData, HDCodableMessageVersion;

@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying> {
    struct { unsigned char deletionDate : 1; unsigned char deletionReason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (retain, nonatomic) NSData *syncIdentifier;
@property (nonatomic) BOOL hasDeletionDate;
@property (nonatomic) double deletionDate;
@property (readonly, nonatomic) BOOL hasMessageVersion;
@property (retain, nonatomic) HDCodableMessageVersion *messageVersion;
@property (nonatomic) BOOL hasDeletionReason;
@property (nonatomic) long long deletionReason;

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
