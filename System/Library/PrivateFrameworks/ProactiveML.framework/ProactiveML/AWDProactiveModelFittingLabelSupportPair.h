@interface AWDProactiveModelFittingLabelSupportPair : PBCodable <NSCopying> {
    struct { unsigned char label : 1; unsigned char support : 1; } _has;
}

@property (nonatomic) BOOL hasLabel;
@property (nonatomic) unsigned long long label;
@property (nonatomic) BOOL hasSupport;
@property (nonatomic) float support;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
