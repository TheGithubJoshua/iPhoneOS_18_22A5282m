@class NSMutableArray, _MRLanguageOptionProtobuf;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying> {
    struct { unsigned char allowEmptySelection : 1; } _has;
}

@property (nonatomic) BOOL hasAllowEmptySelection;
@property (nonatomic) BOOL allowEmptySelection;
@property (readonly, nonatomic) BOOL hasDefaultLanguageOption;
@property (retain, nonatomic) _MRLanguageOptionProtobuf *defaultLanguageOption;
@property (retain, nonatomic) NSMutableArray *languageOptions;

+ (Class)languageOptionsType;

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
- (void)addLanguageOptions:(id)a0;
- (void)clearLanguageOptions;
- (id)languageOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)languageOptionsCount;

@end
