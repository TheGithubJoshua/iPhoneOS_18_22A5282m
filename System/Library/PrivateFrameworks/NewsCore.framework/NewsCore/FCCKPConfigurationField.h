@class NSString, FCCKPConfigurationFieldValue;

@interface FCCKPConfigurationField : PBCodable <NSCopying> {
    NSString *_name;
    FCCKPConfigurationFieldValue *_value;
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
