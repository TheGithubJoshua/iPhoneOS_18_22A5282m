@interface PPTClientInterface : NSObject

+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
+ (id)getAllSubsystem;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;
+ (id)getAllFrameworkSubsystem;
+ (id)getMetadataByNameForSubsystem:(id)a0 category:(id)a1;
+ (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
+ (id)getMetadataByCategoryForSubsystem:(id)a0;
+ (id)getMetadataForSubsystem:(id)a0;
+ (void)buildDeviceMetadata;

@end
