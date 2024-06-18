@class GEOPDSearchTokenSet;

@interface GEOPDSearchSpellSuggestion : PBCodable <NSCopying> {
    double _score;
    GEOPDSearchTokenSet *_suggestion;
    unsigned int _editDistance;
    float _rawScore;
    struct { unsigned char has_score : 1; unsigned char has_editDistance : 1; unsigned char has_rawScore : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
