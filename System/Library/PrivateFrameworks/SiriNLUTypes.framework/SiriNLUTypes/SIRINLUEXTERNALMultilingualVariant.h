@class NSString;

@interface SIRINLUEXTERNALMultilingualVariant : PBCodable <NSCopying> {
    struct { unsigned char languageVariantScore : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLanguageVariantName;
@property (retain, nonatomic) NSString *languageVariantName;
@property (nonatomic) BOOL hasLanguageVariantScore;
@property (nonatomic) double languageVariantScore;

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
