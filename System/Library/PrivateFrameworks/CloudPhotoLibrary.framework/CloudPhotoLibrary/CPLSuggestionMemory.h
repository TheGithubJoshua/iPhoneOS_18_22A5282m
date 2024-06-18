@class NSString;

@interface CPLSuggestionMemory : PBCodable <NSCopying> {
    struct { unsigned char feature : 1; unsigned char type : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMemoryIdentifier;
@property (retain, nonatomic) NSString *memoryIdentifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasFeature;
@property (nonatomic) unsigned int feature;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NSString *context;

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
