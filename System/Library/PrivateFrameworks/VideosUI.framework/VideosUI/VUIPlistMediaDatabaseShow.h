@class NSArray;

@interface VUIPlistMediaDatabaseShow : VUIPlistMediaDatabaseEntity <NSCopying>

@property (retain, nonatomic) NSArray *seasons;

- (id)initWithDictionary:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 type:(unsigned long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)isLocal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)seasonForIdentifier:(id)a0;

@end
