@class NSSet, NSDictionary, NSArray, ATXFaceGalleryConfiguration, NSOrderedSet, NSMutableDictionary;
@protocol PBFComplicationSnapshotProviding, PBFPosterSnapshotProviding;

@interface PBFGalleryConfiguration : NSObject {
    NSOrderedSet *_sectionIdentifiers;
    NSDictionary *_sectionIdentifierToSectionMap;
    NSDictionary *_sectionIdentifierToItems;
    NSMutableDictionary *_posterDescriptorLookupInfoForItemIdentifier;
    NSMutableDictionary *_previewIdentifierToPreview;
    NSOrderedSet *_previews;
}

@property (readonly, nonatomic) NSDictionary *dynamicDescriptorsByExtensionIdentifier;
@property (readonly, nonatomic) NSDictionary *staticDescriptorsByExtensionIdentifier;
@property (readonly, nonatomic) NSDictionary *extensionsByIdentifier;
@property (readonly, nonatomic) NSSet *posterPreviews;
@property (readonly, nonatomic) NSArray *posterSnapshotRequests;
@property (retain, nonatomic) id<PBFPosterSnapshotProviding> snapshotProvider;
@property (retain, nonatomic) id<PBFComplicationSnapshotProviding> complicationSnapshotProvider;
@property (readonly, nonatomic) NSSet *snapshotURLs;
@property (readonly, nonatomic) ATXFaceGalleryConfiguration *suggestedLayout;
@property (readonly, copy, nonatomic) NSOrderedSet *sectionIdentifiers;

- (id)init;
- (id)itemsForSectionWithIdentifier:(id)a0;
- (id)initWithSuggestedLayout:(id)a0 dynamicDescriptorsByExtensionIdentifier:(id)a1 staticDescriptorsByExtensionIdentifier:(id)a2 extensionsByIdentifier:(id)a3;
- (id)posterSnapshotRequestsForExtensionBundleIdentifier:(id)a0;
- (void)enumeratePreviews:(id /* block */)a0;
- (id)_posterDescriptorLookupInfoForPreviewItem:(id)a0;
- (id)complicationSnapshotRequests;
- (id)posterPreviewForUniqueIdentifier:(id)a0;
- (void)fetchComplicationsForPreview:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_hydrateSectionIdentifiersIfNeeded;
- (id)_posterDescriptorLookupInfoForItem:(id)a0;
- (id)sectionForSectionIdentifier:(id)a0;
- (id)previewForItem:(id)a0 section:(id)a1;
- (void)prewarmGallerySnapshotsWithCompletion:(id /* block */)a0;
- (id)snapshotForPosterPreview:(id)a0;

@end
