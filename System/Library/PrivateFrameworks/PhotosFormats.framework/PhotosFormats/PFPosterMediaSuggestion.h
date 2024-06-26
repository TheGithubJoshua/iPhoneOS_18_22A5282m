@class NSString;

@interface PFPosterMediaSuggestion : PFPosterMedia <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *suggestionUUID;
@property (nonatomic) unsigned short suggestionSubtype;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssetUUID:(id)a0 suggestionUUID:(id)a1 suggestionSubtype:(unsigned short)a2;

@end
