@class NSString;

@interface SBPBDisplayItem : PBCodable <NSCopying> {
    NSString *_bundleIdentifier;
    NSString *_sceneIdentifier;
    int _type;
    NSString *_webClipIdentifier;
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
