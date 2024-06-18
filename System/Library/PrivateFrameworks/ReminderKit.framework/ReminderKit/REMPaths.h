@class NSURL;

@interface REMPaths : NSObject

@property (class, readonly, nonatomic) NSURL *applicationDocumentsURL;
@property (class, readonly, nonatomic) NSURL *reminderDataURL;
@property (class, readonly, nonatomic) NSURL *locationBundleURL;

+ (id)mainContainerBackupURL;
+ (id)temporaryMLModelURL;
+ (id)mainContainerURL;
+ (id)attributesForGroupContainerDirectory;
+ (id)urlForIsolatedContainerWithIdentifier:(id)a0;
+ (id)pptSentinelURLInContainerURL:(id)a0;
+ (id)URLForGroupContainerWithIdentifier:(id)a0;
+ (void)setApplicationDocumentsURL:(id)a0;
+ (id)containerURLForMLModel;
+ (BOOL)_shouldUseCentralizedDataPath;
+ (id)MLModelURL;

@end
