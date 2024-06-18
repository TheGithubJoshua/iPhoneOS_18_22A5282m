@interface SUSUIFakeSUDescriptor : SUDescriptor

- (id)publisher;
- (id)productVersion;
- (id)productBuildVersion;
- (unsigned long long)downloadSize;
- (BOOL)isDownloadable;
- (int)updateType;
- (id)documentation;
- (id)humanReadableUpdateName;
- (unsigned long long)preparationSize;
- (unsigned long long)installationSize;
- (id)productSystemName;
- (BOOL)isDownloadableOverCellular;

@end
