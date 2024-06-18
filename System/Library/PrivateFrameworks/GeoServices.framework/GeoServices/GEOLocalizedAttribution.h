@class NSString, NSMutableArray, PBDataReader;

@interface GEOLocalizedAttribution : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_captionDisplayString;
    NSString *_displayName;
    NSString *_language;
    NSMutableArray *_logoURLs;
    NSMutableArray *_snippetLogoURLs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_captionDisplayString : 1; unsigned char read_displayName : 1; unsigned char read_language : 1; unsigned char read_logoURLs : 1; unsigned char read_snippetLogoURLs : 1; unsigned char wrote_anyField : 1; } _flags;
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
- (id)bestURLForLogos:(id)a0 scale:(double)a1;

@end