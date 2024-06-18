@class NSString, NSArray;
@protocol TRIFactorPackSetId;

@interface TRIFactorPackSet : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident;
@property (readonly, nonatomic) NSArray *packs;

+ (id)allReferencedCKRecordKeys;
+ (BOOL)_signatures:(id)a0 onItems:(id)a1 areValidUsingPublicCertificate:(id)a2;
+ (id)artifactFromCKRecord:(id)a0;
+ (id)setWithIdent:(id)a0 packs:(id)a1;

- (id)init;
- (BOOL)isEqualToSet:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithReplacementIdent:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithReplacementPacks:(id)a0;
- (id)initWithIdent:(id)a0 packs:(id)a1;
- (BOOL)isStructurallyValid;

@end
