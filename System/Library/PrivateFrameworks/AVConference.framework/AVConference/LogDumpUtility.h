@interface LogDumpUtility : NSObject

+ (id)getCachesDirectoryPath;
+ (BOOL)shouldCleanupFiles;
+ (id)logFilename:(int)a0 dumpID:(id)a1 logNameType:(int)a2 prefix:(id)a3 suffix:(id)a4;
+ (id)createFileListSortedByTimestamp:(id)a0;
+ (void)removeOldFilesInDefaultLogDumpPath;
+ (void)removeFilesInDirectory:(id)a0 olderThan:(id)a1;
+ (id)getDefaultLogDumpPath;
+ (BOOL)createDirectory:(id)a0;

@end
