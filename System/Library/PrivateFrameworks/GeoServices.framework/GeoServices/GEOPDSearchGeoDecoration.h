@class NSString, PBDataReader;

@interface GEOPDSearchGeoDecoration : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_canonicalForm;
    NSString *_cardinalWord;
    NSString *_ordinalWord;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isArticle;
    BOOL _isCardinal;
    BOOL _isDirection;
    BOOL _isDropped;
    BOOL _isMultiTokenDirection;
    BOOL _isMultiTokenTitle;
    BOOL _isMultiTokenType;
    BOOL _isOrdinal;
    BOOL _isPersonalName;
    BOOL _isStopWord;
    BOOL _isTitle;
    BOOL _isType;
    struct { unsigned char has_isArticle : 1; unsigned char has_isCardinal : 1; unsigned char has_isDirection : 1; unsigned char has_isDropped : 1; unsigned char has_isMultiTokenDirection : 1; unsigned char has_isMultiTokenTitle : 1; unsigned char has_isMultiTokenType : 1; unsigned char has_isOrdinal : 1; unsigned char has_isPersonalName : 1; unsigned char has_isStopWord : 1; unsigned char has_isTitle : 1; unsigned char has_isType : 1; unsigned char read_canonicalForm : 1; unsigned char read_cardinalWord : 1; unsigned char read_ordinalWord : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;

@end
