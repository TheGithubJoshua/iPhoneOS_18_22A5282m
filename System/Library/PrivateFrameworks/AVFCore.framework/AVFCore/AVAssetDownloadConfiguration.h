@class NSArray, NSString, NSData, AVURLAsset, AVAssetDownloadContentConfiguration;

@interface AVAssetDownloadConfiguration : NSObject <NSSecureCoding> {
    AVURLAsset *_asset;
    NSString *_title;
    BOOL optimizesAuxiliaryContentConfigurations;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *artworkData;
@property (readonly, nonatomic) AVAssetDownloadContentConfiguration *primaryContentConfiguration;
@property (copy, nonatomic) NSArray *auxiliaryContentConfigurations;
@property (nonatomic) BOOL optimizesAuxiliaryContentConfigurations;

+ (id)downloadConfigurationWithAsset:(id)a0 title:(id)a1;

- (id)initWithCoder:(id)a0;
- (id)_asset;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;
- (id)_serializableRepresentation;
- (id)initWithAsset:(id)a0 title:(id)a1;

@end
