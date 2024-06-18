@class NSString;

@interface PAPBApplication : PBCodable <NSCopying> {
    struct { unsigned char identifierType : 1; } _has;
}

@property (nonatomic) BOOL hasIdentifierType;
@property (nonatomic) int identifierType;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
