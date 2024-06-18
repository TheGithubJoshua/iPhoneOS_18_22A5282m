@class NSString;

@interface HDCloudSyncCodableAttachmentReferenceTombstone : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasReferenceIdentifier;
@property (retain, nonatomic) NSString *referenceIdentifier;
@property (readonly, nonatomic) BOOL hasSchemaIdentifier;
@property (retain, nonatomic) NSString *schemaIdentifier;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;

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
