@class NSSet, NSArray;

@interface PLInterLibraryTransferOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSSet *excludedEntityNames;
@property (copy) NSSet *excludedAttributeNames;
@property BOOL updateExistingObjects;
@property BOOL allowSavedAssetTypeChanges;
@property BOOL ignoreMissingSourceFiles;
@property BOOL ignoreMissingSourceFileURLs;
@property (copy) NSArray *keysForDeDupe;
@property unsigned short allowDeleteOfSavedAssetTypes;
@property BOOL skipContextSave;

+ (id)newTransferOptionsForPersonFromSystemToSyndication;
+ (id)newTransferOptionsForAssetsFromSyndicationToSystem;
+ (id)newTransferOptionsForFaceCropFromSyndicationToSystem;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)_sortedEntityNamesAsString;

@end
