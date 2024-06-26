@class NSString;

@interface HKCodablePrescriptionType : PBCodable <NSCopying> {
    struct APPLE_152 { unsigned char contacts : 1; } _has;
}

@property (nonatomic) BOOL hasContacts;
@property (nonatomic) BOOL contacts;
@property (readonly, nonatomic) BOOL hasGlassesDescription;
@property (retain, nonatomic) NSString *glassesDescription;

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
