@class NSString, NSMutableArray;

@interface FCCKPLocale : PBCodable <NSCopying> {
    NSString *_activeKeyboard;
    NSMutableArray *_enabledKeyboards;
    NSString *_languageCode;
    NSString *_regionCode;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
