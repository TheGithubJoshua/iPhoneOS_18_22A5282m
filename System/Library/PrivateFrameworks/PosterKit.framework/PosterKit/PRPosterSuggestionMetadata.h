@class NSString, NSDictionary, ATXFaceGalleryItem, NSDate;

@interface PRPosterSuggestionMetadata : NSObject <BSDescriptionStreamable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) ATXFaceGalleryItem *suggestedGalleryItem;
@property (readonly, copy, nonatomic) NSDictionary *suggestedComplicationsByIdentifier;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)metadataBySettingLastModifiedDateToNow;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuggestedGalleryItem:(id)a0 suggestedComplicationsByIdentifier:(id)a1 lastModifiedDate:(id)a2;

@end
