@class NSData, NSString;

@interface BLTPBSectionIconVariant : PBCodable <NSCopying> {
    struct { unsigned char precomposed : 1; } _has;
}

@property (nonatomic) unsigned int format;
@property (readonly, nonatomic) BOOL hasImageData;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) BOOL hasPrecomposed;
@property (nonatomic) BOOL precomposed;
@property (readonly, nonatomic) BOOL hasSystemImageName;
@property (retain, nonatomic) NSString *systemImageName;

+ (id)sectionIconVariantWithImageData:(id)a0 systemImageName:(id)a1 precomposed:(BOOL)a2 format:(unsigned int)a3;

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
