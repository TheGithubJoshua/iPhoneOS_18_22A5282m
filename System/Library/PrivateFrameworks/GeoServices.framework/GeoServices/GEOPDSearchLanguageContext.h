@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchLanguageContext : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_deviceDisplayLanguage;
    NSString *_deviceKeyboardLanguage;
    NSString *_deviceSpokenLanguage;
    NSMutableArray *_displayLanguages;
    NSMutableArray *_spokenLanguages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_deviceDisplayLanguage : 1; unsigned char read_deviceKeyboardLanguage : 1; unsigned char read_deviceSpokenLanguage : 1; unsigned char read_displayLanguages : 1; unsigned char read_spokenLanguages : 1; unsigned char wrote_anyField : 1; } _flags;
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
