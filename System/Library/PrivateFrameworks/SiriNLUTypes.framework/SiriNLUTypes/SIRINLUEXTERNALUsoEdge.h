@class SIRINLUEXTERNALUsoEdgeLabel;

@interface SIRINLUEXTERNALUsoEdge : PBCodable <NSCopying> {
    struct { unsigned char fromIndex : 1; unsigned char toIndex : 1; } _has;
}

@property (nonatomic) BOOL hasFromIndex;
@property (nonatomic) unsigned int fromIndex;
@property (nonatomic) BOOL hasToIndex;
@property (nonatomic) unsigned int toIndex;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) SIRINLUEXTERNALUsoEdgeLabel *label;

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
