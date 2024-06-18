@class NSString, NSDictionary, MPIdentifierSet;

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers;
@property (readonly, copy, nonatomic) NSString *itemKind;
@property (readonly, nonatomic, getter=isLibraryContent) BOOL libraryContent;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSString *catalogID;
@property (readonly, copy, nonatomic) NSString *libraryID;
@property (readonly, copy, nonatomic) NSString *persistentID;
@property (readonly, copy, nonatomic) NSDictionary *dictionary;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
