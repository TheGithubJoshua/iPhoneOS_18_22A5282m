@class SIRINLUEXTERNALUsoLabel;

@interface SIRINLUEXTERNALUsoEdgeLabel : PBCodable <NSCopying> {
    struct { unsigned char enumeration : 1; unsigned char usoElementId : 1; } _has;
}

@property (nonatomic) BOOL hasUsoElementId;
@property (nonatomic) unsigned int usoElementId;
@property (nonatomic) BOOL hasEnumeration;
@property (nonatomic) unsigned int enumeration;
@property (readonly, nonatomic) BOOL hasBaseEdgeLabel;
@property (retain, nonatomic) SIRINLUEXTERNALUsoLabel *baseEdgeLabel;

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
