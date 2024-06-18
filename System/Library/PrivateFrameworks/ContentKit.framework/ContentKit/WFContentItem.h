@class NSMutableDictionary, WFType, NSDictionary, WFObjectType, NSItemProvider, NSOrderedSet, NSExtensionItem, WFImage, NSString, WFContentItemChangeTransaction, WFContentItemStringConversionBehavior, NSArray, WFRepresentation, WFFileType, WFContentAttributionSet, NSUUID;

@interface WFContentItem : NSObject <WFContentItemClass, WFCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSArray *pasteboardValueClasses;
@property (class, readonly, nonatomic) NSOrderedSet *supportedTypesExcludingInstanceSpecificTypes;
@property (class, readonly, nonatomic) NSOrderedSet *supportedItemClassesExcludingInstanceSpecificTypes;
@property (class, readonly, nonatomic) BOOL supportedTypesMustBeDeterminedByInstance;
@property (class, readonly, nonatomic) NSOrderedSet *supportedTypes;
@property (class, readonly, nonatomic) NSOrderedSet *supportedItemClasses;
@property (class, readonly, nonatomic) NSOrderedSet *allSupportedTypes;
@property (class, readonly, nonatomic) NSOrderedSet *allSupportedItemClasses;
@property (class, readonly, nonatomic) NSArray *contentCategories;
@property (class, readonly, nonatomic) NSString *typeDescription;
@property (class, readonly, nonatomic) NSString *localizedTypeDescription;
@property (class, readonly, nonatomic) NSString *pluralTypeDescription;
@property (class, readonly, nonatomic) NSString *localizedPluralTypeDescription;
@property (class, readonly, nonatomic) NSString *filterDescription;
@property (class, readonly, nonatomic) NSString *localizedFilterDescription;
@property (class, readonly, nonatomic) NSString *pluralFilterDescription;
@property (class, readonly, nonatomic) NSString *localizedPluralFilterDescription;
@property (class, readonly, nonatomic) NSString *countDescription;
@property (class, readonly, nonatomic) BOOL canLowercaseTypeDescription;
@property (class, readonly, nonatomic) NSArray *properties;
@property (class, readonly, nonatomic) NSArray *allProperties;
@property (class, readonly, nonatomic) WFContentItemStringConversionBehavior *stringConversionBehavior;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) NSExtensionItem *extensionItem;
@property (readonly, nonatomic) NSItemProvider *minimalItemProvider;
@property (readonly, nonatomic) NSExtensionItem *minimalExtensionItem;
@property (readonly, nonatomic) NSString *richListTitle;
@property (readonly, nonatomic) unsigned long long preferredDisplayStyle;
@property (retain, nonatomic) NSMutableDictionary *representationsByType;
@property (retain, nonatomic) NSMutableDictionary *subItemsByClass;
@property (readonly, nonatomic) WFContentItemChangeTransaction *changeTransaction;
@property (readonly, nonatomic) NSOrderedSet *ownedTypes;
@property (readonly, nonatomic) NSOrderedSet *outputTypes;
@property (readonly, nonatomic) WFType *internalRepresentationType;
@property (readonly, nonatomic) WFRepresentation *internalRepresentation;
@property (readonly, nonatomic) NSArray *allowedClassesForDecodingInternalRepresentations;
@property (readonly, nonatomic) NSString *internalName;
@property (readonly, nonatomic) NSOrderedSet *supportedTypes;
@property (readonly, nonatomic) NSOrderedSet *supportedItemClasses;
@property (readonly, nonatomic) NSOrderedSet *allSupportedTypes;
@property (readonly, nonatomic) NSOrderedSet *allSupportedItemClasses;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) WFImage *icon;
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) WFContentAttributionSet *attributionSet;
@property (readonly, nonatomic) NSUUID *cachingIdentifier;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)propertyForName:(id)a0;
+ (id)itemWithObject:(id)a0;
+ (id)itemWithObject:(id)a0 named:(id)a1;
+ (BOOL)hasStringOutput;
+ (id)badCoercionErrorForType:(id)a0;
+ (id)coercions;
+ (BOOL)contentItems:(id)a0 haveContentProperties:(id)a1;
+ (id)filterRepresentationsForAllowedContent:(id)a0;
+ (BOOL)hasLibrary;
+ (id)itemWithFile:(id)a0;
+ (id)itemWithFile:(id)a0 origin:(id)a1 disclosureLevel:(unsigned long long)a2;
+ (id)itemWithObject:(id)a0 attributionSet:(id)a1;
+ (id)itemWithObject:(id)a0 named:(id)a1 attributionSet:(id)a2;
+ (id)itemWithObject:(id)a0 origin:(id)a1 disclosureLevel:(unsigned long long)a2;
+ (id)itemWithObject:(id)a0 privacyConfiguration:(id)a1;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (id)namePropertyBuilder;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)populateBadCoercionError:(id)a0 withResponsibleComponent:(id)a1;
+ (id)propertyBuilders;
+ (void)runQuery:(id)a0 withItems:(id)a1 permissionRequestor:(id)a2 completionHandler:(id /* block */)a3;
+ (id)supportedPropertyForProperty:(id)a0;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;
+ (id)badCoercionErrorForObjectClass:(Class)a0;
+ (id)badCoercionErrorForItemClasses:(id)a0;
+ (id)cachedCoercions;
+ (id)itemWithRepresentation:(id)a0 forType:(id)a1;
+ (id)badCoercionErrorDefaultResponsibleComponent;
+ (id)badCoercionErrorForItemClass:(Class)a0;
+ (id)badCoercionErrorForTypeDescription:(id)a0 toTypeDescription:(id)a1;
+ (id)badCoercionErrorWithReasonString:(id)a0;
+ (id)coercionForCoercingToType:(id)a0 concurrencyMode:(long long)a1;
+ (id)coercionForType:(id)a0;
+ (id /* block */)contentPropertySubstitutor;
+ (BOOL)errorIsBadCoercionError:(id)a0;
+ (void)getContentItemFromSerializedItem:(id)a0 sourceName:(id)a1 completionHandler:(id /* block */)a2;
+ (BOOL)hasFileOutput;
+ (BOOL)isAvailableOnPlatform:(long long)a0;
+ (BOOL)isContentItemSubclass;
+ (id)itemFromSerializedItem:(id)a0 withItemClass:(Class)a1 forType:(id)a2 nameIfKnown:(id)a3 sourceName:(id)a4 attributionSet:(id)a5 cachingIdentifier:(id)a6 completionHandler:(id /* block */)a7;
+ (id)itemWithFile:(id)a0 attributionSet:(id)a1;
+ (id)itemWithFile:(id)a0 attributionSet:(id)a1 cachingIdentifier:(id)a2;
+ (id)itemWithObject:(id)a0 named:(id)a1 attributionSet:(id)a2 cachingIdentifier:(id)a3;
+ (id)itemWithRepresentation:(id)a0;
+ (id)itemWithRepresentation:(id)a0 attributionSet:(id)a1;
+ (id)itemWithRepresentation:(id)a0 attributionSet:(id)a1 cachingIdentifier:(id)a2;
+ (id)itemWithRepresentation:(id)a0 attributionSet:(id)a1 includesDefaultAttributionSet:(BOOL)a2;
+ (id)itemWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2;
+ (id)itemWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2 cachingIdentifier:(id)a3;
+ (id)itemWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2 includesDefaultAttributionSet:(BOOL)a3;
+ (id)itemWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2 includesDefaultAttributionSet:(BOOL)a3 cachingIdentifier:(id)a4;
+ (id)outputTypesFromCoercions;
+ (BOOL)supportedItemClassMustBeDeterminedByInstance:(Class)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithName:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)performCoercion:(id)a0;
- (Class)classForCopying;
- (BOOL)getListAltText:(id /* block */)a0;
- (id)defaultSourceForRepresentation:(id)a0;
- (void)getFileRepresentations:(id /* block */)a0 forType:(id)a1;
- (id)objectForClass:(Class)a0;
- (BOOL)alwaysEncodeUsingWFSerializableContent;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)copyStateToItem:(id)a0;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateFileRepresentations:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)generateFileRepresentationsForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentation:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)getFileRepresentation:(id /* block */)a0 forType:(id)a1;
- (void)getFileRepresentationsForSerialization:(id /* block */)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)getObjectRepresentation:(id /* block */)a0 forClass:(Class)a1;
- (void)getObjectRepresentations:(id /* block */)a0 forClass:(Class)a1;
- (void)getPreferredFileExtension:(id /* block */)a0;
- (void)getPreferredFileSize:(id /* block */)a0;
- (id)getRepresentationsForType:(id)a0 error:(id *)a1;
- (void)setFileRepresentations:(id)a0 forType:(id)a1;
- (id)_getRepresentationsForType:(id)a0 options:(id)a1 error:(id *)a2;
- (BOOL)canEncodeWithCoder:(id)a0;
- (BOOL)canGenerateIntermediaryRepresentationForItemClass:(Class)a0;
- (BOOL)canPerformCoercion:(id)a0;
- (void)coerceToItemClass:(Class)a0 completionHandler:(id /* block */)a1;
- (void)coerceToItemClasses:(id)a0 completionHandler:(id /* block */)a1;
- (void)coerceToItemClasses:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)coercionOptions:(id)a0 allowCoercionsToItemClass:(Class)a1;
- (BOOL)coercionOptions:(id)a0 allowCoercionsToType:(id)a1;
- (id)contentItemByMergingAttributionSet:(id)a0;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)extensionItemWithItemProvider:(id)a0;
- (id)fileRepresentationForType:(id)a0;
- (id)fileRepresentationsForType:(id)a0;
- (void)forceCoerceToItemClasses:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateFirstLevelSubItemsForItemClass:(Class)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)generateFirstLevelSubItemsForItemClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateRepresentationsForType:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)generateRepresentationsForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateSubItemsForItemClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (void)generateSubItemsForItemClasses:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (void)getFileRepresentation:(id /* block */)a0 forType:(id)a1 options:(id)a2;
- (void)getFileRepresentations:(id /* block */)a0 forType:(id)a1 options:(id)a2;
- (void)getObjectRepresentation:(id /* block */)a0 forClass:(Class)a1 options:(id)a2;
- (void)getObjectRepresentations:(id /* block */)a0 forClass:(Class)a1 options:(id)a2;
- (void)getRepresentationsForType:(id)a0 options:(id)a1 completionHandler:(id /* block */)a2;
- (id)getRepresentationsForType:(id)a0 options:(id)a1 error:(id *)a2;
- (void)getSerializedItem:(id /* block */)a0;
- (void)getTitleWithPermissionRequestor:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2;
- (id)initWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2 cachingIdentifier:(id)a3;
- (id)initWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2 includesDefaultAttributionSet:(BOOL)a3;
- (id)initWithRepresentation:(id)a0 forType:(id)a1 attributionSet:(id)a2 includesDefaultAttributionSet:(BOOL)a3 cachingIdentifier:(id)a4;
- (id)initWithRepresentationsByType:(id)a0 forType:(id)a1 subItemsByClass:(id)a2 attributionSet:(id)a3 includesDefaultAttributionSet:(BOOL)a4 cachingIdentifier:(id)a5;
- (id)intermediaryTypesForCoercionToItemClass:(Class)a0;
- (id)internalRepresentationForCopyingWithName:(id)a0;
- (BOOL)isCoercibleToItemClass:(Class)a0;
- (BOOL)isCoercibleToItemClasses:(id)a0;
- (id)itemProviderForTypes:(id)a0;
- (id)itemsByCoercingToItemClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (id)nativePasteboardTypeForObjectRepresentationOfClass:(Class)a0;
- (id)objectRepresentationForClass:(Class)a0;
- (id)objectRepresentationsForClass:(Class)a0;
- (id)objectsForClass:(Class)a0;
- (id)preferredTypeOfClass:(Class)a0;
- (id)representationForType:(id)a0;
- (id)representationsForType:(id)a0;
- (void)setObjectRepresentations:(id)a0 forClass:(Class)a1;
- (void)setRepresentations:(id)a0 forType:(id)a1;
- (void)setSubItems:(id)a0 forClass:(Class)a1;
- (id)subItemForClass:(Class)a0;
- (id)subItemsForClass:(Class)a0;
- (id)typeForCoercionRequest:(id)a0;

@end