@interface REMCloudContainer : NSObject

+ (id)newCloudContainerWithPublicCloudDatabase;
+ (BOOL)isSandboxEnvironment;
+ (id)newCloudContainerForAccountID:(id)a0;
+ (id)newCloudContainerForAccount:(id)a0;

@end
