@interface ATXPaths : NSObject

+ (id)onboardingStackResultCacheFilePath;
+ (id)widgetPredictionModelDirectory;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)bookmarksPathFile:(id)a0;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (id)uiCachesRootDirectory;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)appPredictionCacheDirectory;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (id)appPredictionBackupDirectory;
+ (id)complicationInlineSetCacheFilePath;
+ (void)createDataVault:(id)a0;
+ (id)complicationModularSetCacheFilePath;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)freeMomentTimeStampFile;
+ (id)metricsRootDirectory;
+ (id)posterDescriptorCacheFilePath;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)contextualActionsModelDirectory;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (void)createDirectoriesIfNeeded;
+ (id)biomeStreamsRootDirectory;
+ (id)scoreNormalizationModelDirectory;
+ (id)feedbackRootDirectory;
+ (id)modeCachesRootDirectory;
+ (id)appPredictionDirectory;
+ (id)trialFolderResourcePath;
+ (id)clientModelCachesRootDirectory;

@end
