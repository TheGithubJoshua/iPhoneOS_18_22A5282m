@class NSString, NSArray, PRSPosterPath, PRPosterDescriptorHomeScreenConfiguration, PRPosterDescriptorGalleryOptions, NSURL;
@protocol BSInvalidatable;

@interface PRPosterDescriptor : NSObject <PRPosterContentsInternal, PRPosterContents> {
    id<BSInvalidatable> _pathValidityExtension;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *displayNameLocalizationKey;
@property (readonly, copy, nonatomic) NSArray *preferredTimeFontConfigurations;
@property (readonly, copy, nonatomic) NSArray *preferredTitleColors;
@property (readonly, copy, nonatomic) PRPosterDescriptorHomeScreenConfiguration *preferredHomeScreenConfiguration;
@property (readonly, copy, nonatomic) NSArray *preferredHomeScreenSolidColors;
@property (readonly, copy, nonatomic) PRPosterDescriptorGalleryOptions *preferredGalleryOptions;
@property (readonly, nonatomic) PRSPosterPath *_path;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier;
@property (readonly, copy, nonatomic) NSURL *assetDirectory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_initWithPath:(id)a0;
- (id)descriptorIdentifier;
- (id)objectForUserInfoKey:(id)a0;
- (id)loadConfigurableOptionsWithError:(out id *)a0;
- (id)assetDirectory;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)preferredTimeFontConfigurationsWithExtensionBundleURL:(id)a0;
- (id)loadUserInfoWithError:(out id *)a0;
- (void)dealloc;
- (id)identifier;
- (id)preferredGalleryOptions;
- (id)loadGalleryOptionsWithError:(out id *)a0;

@end
