@class NSString, NSData;

@interface MAAutoAssetSelector : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetSpecifier;
@property (readonly, nonatomic) NSData *downloadDecryptionKey;

- (id)initWithCoder:(id)a0;
- (id)copyClearingWriteOnlyFields;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)copy;
- (void)assignAssetVersion:(id)a0;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2 usingDecryptionKey:(id)a3;
- (id)persistedEntryID;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 matchingAssetVersion:(id)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)summary;
- (id)description;
- (id)initForAssetType:(id)a0 withAssetSpecifier:(id)a1 usingDecryptionKey:(id)a2;
- (id)initForAssetType:(id)a0;
- (id)newSummaryDictionary;

@end
