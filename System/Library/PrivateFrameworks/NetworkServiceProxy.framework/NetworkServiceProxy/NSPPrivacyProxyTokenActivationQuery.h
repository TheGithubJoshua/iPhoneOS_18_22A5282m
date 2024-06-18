@class NSPPrivacyProxyTokenInfo, NSPPrivacyProxyBAAValidation;

@interface NSPPrivacyProxyTokenActivationQuery : PBCodable <NSCopying> {
    int _authType;
    NSPPrivacyProxyBAAValidation *_baaParameters;
    NSPPrivacyProxyTokenInfo *_tokenInfo;
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
