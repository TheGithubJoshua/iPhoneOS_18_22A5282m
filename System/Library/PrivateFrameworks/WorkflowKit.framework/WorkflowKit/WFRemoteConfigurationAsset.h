@class NSString, CKRecordID, NSData, WFFileRepresentation, NSNumber;

@interface WFRemoteConfigurationAsset : NSObject <WFCloudKitItem>

@property (retain, nonatomic) NSString *assetType;
@property (retain, nonatomic) NSString *shortVersion;
@property (retain, nonatomic) WFFileRepresentation *assetDataFile;
@property (copy, nonatomic) NSString *configuration;
@property (copy, nonatomic) NSNumber *buildNumber;
@property (readonly, nonatomic) CKRecordID *identifier;
@property (copy, nonatomic) NSData *recordSystemFieldsData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordType;
+ (id)properties;

- (void).cxx_destruct;

@end
