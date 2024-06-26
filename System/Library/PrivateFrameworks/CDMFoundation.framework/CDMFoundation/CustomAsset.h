@class NSString, NSDictionary;

@interface CustomAsset : NSObject <NLAsset> {
    NSString *_path;
    NSString *_version;
    NSDictionary *_assetMetadata;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)toDictionary;
- (long long)getAssetType;
- (id)getAssetVersion;
- (id)getAssetMetadata;
- (id)getAssetPath;

@end
